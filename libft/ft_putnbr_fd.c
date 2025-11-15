/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:14:33 by imelero-          #+#    #+#             */
/*   Updated: 2025/10/09 18:40:55 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(-nb, fd);
		}
		else if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
			ft_putnbr_fd(nb % 10, fd);
		}
		else
		{
			ft_putchar_fd(nb + '0', fd);
		}
	}
}
/*
int	main(void)
{
	int	nb;

	nb = -208442013;
	ft_putnbr_fd(nb, 1);
	return (0);
}*/
