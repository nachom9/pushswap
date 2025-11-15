/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:08:40 by imelero-          #+#    #+#             */
/*   Updated: 2025/09/29 12:45:55 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isdigit('0'));
	printf("%d", ft_isdigit('9'));
	printf("%d", ft_isdigit('5'));
	printf("%d", ft_isdigit('a'));
	printf("%d", ft_isdigit('H'));
	return (0);
}*/
