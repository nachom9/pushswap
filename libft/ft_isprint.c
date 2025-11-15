/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:46:24 by imelero-          #+#    #+#             */
/*   Updated: 2025/09/29 16:13:13 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isprint(' '));
	printf("%d", ft_isprint('d'));
	printf("%d", ft_isprint('('));
	printf("%d", ft_isprint('9'));
	printf("%d", ft_isprint('^'));
	printf("%d", ft_isprint('~'));
	printf("%d", ft_isprint(L'€'));
	printf("%d", ft_isprint(L'¬'));
	printf("%d", ft_isprint('\n'));
	return (0);
}*/
