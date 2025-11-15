/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_extra.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:38:04 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/03 12:35:12 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pft_putnbr_base_up(int nbr, int count)
{
	unsigned int	nb;

	nb = nbr;
	if (nb >= 16)
	{
		count = pft_putnbr_base_up(nb / 16, count);
		count = pft_putnbr_base_up(nb % 16, count);
	}
	else
		count = pft_putchar_fd(HEX_BASE_UP[nb], 1, count);
	return (count);
}

static int	pft_putadr_extra(unsigned long int nb, int count)
{
	if (nb >= 16)
	{
		count = pft_putadr_extra(nb / 16, count);
		count = pft_putadr_extra(nb % 16, count);
	}
	else
		count = pft_putchar_fd(HEX_BASE[nb], 1, count);
	return (count);
}

int	pft_putadr(unsigned long int nb, int count)
{
	if (!nb)
	{
		count = pft_putstr_fd("(nil)", 1, count);
		return (count);
	}
	if (nb)
	{
		write (1, "0x", 2);
		count += 2;
	}
	else
		return (0);
	count = pft_putadr_extra(nb, count);
	return (count);
}
