/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:09:11 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/03 12:41:23 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pft_putstr_fd(char *s, int fd, int count)
{
	int	i;

	i = 0;
	if (!s)
	{
		count = pft_putstr_fd("(null)", 1, count);
		return (count);
	}
	while (s[i])
	{
		write(fd, &s[i], 1);
		count++;
		i++;
	}
	return (count);
}

int	pft_putnbr_fd(int nb, int fd, int count)
{
	if (nb == -2147483648)
	{
		write (fd, "-2147483648", 11);
		count += 11;
	}
	else
	{
		if (nb < 0)
		{
			count = pft_putchar_fd('-', fd, count);
			count = pft_putnbr_fd(-nb, fd, count);
		}
		else if (nb > 9)
		{
			count = pft_putnbr_fd(nb / 10, fd, count);
			count = pft_putnbr_fd(nb % 10, fd, count);
		}
		else
		{
			count = pft_putchar_fd(nb + '0', fd, count);
		}
	}
	return (count);
}

int	pft_putnsg(int nb, int count)
{
	unsigned int	unb;

	unb = nb;
	if (unb > 9)
	{
		count = pft_putnsg(unb / 10, count);
		count = pft_putnsg(unb % 10, count);
	}
	else
	{
		count = pft_putchar_fd(unb + '0', 1, count);
	}
	return (count);
}

int	pft_putnbr_base(int nbr, int count)
{
	unsigned int	nb;

	nb = nbr;
	if (nb >= 16)
	{
		count = pft_putnbr_base(nb / 16, count);
		count = pft_putnbr_base(nb % 16, count);
	}
	else
		count = pft_putchar_fd(HEX_BASE[nb], 1, count);
	return (count);
}

int	pft_putchar_fd(char c, int fd, int count)
{
	write(fd, &c, 1);
	count++;
	return (count);
}
