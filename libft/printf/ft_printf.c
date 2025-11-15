/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:01:48 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/03 19:10:23 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char const *str, va_list args, int count)
{
	if (str[1] == 'c')
		count = pft_putchar_fd(va_arg(args, int), 1, count);
	else if (str[1] == 's')
		count = pft_putstr_fd(va_arg(args, void *), 1, count);
	else if (str[1] == 'i' || str[1] == 'd')
		count = pft_putnbr_fd(va_arg(args, int), 1, count);
	else if (str[1] == 'u')
		count = pft_putnsg(va_arg(args, int), count);
	else if (str[1] == 'x')
		count = pft_putnbr_base(va_arg(args, int), count);
	else if (str[1] == 'X')
		count = pft_putnbr_base_up(va_arg(args, int), count);
	else if (str[1] == 'p')
		count = pft_putadr(va_arg(args, unsigned long int), count);
	else
	{
		write (1, "%", 1);
		count++;
		if (str[1] && str[1] != '%')
			count = pft_putchar_fd(str[1], 1, count);
	}
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!str || (str[0] == '%' && str[1] == '\0'))
		return (-1);
	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count = ft_check(&str[i], args, count);
			i++;
		}
		else
			count = pft_putchar_fd(str[i], 1, count);
		if (str[i])
			i++;
	}
	va_end(args);
	return (count);
}
