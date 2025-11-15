/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:48:48 by imelero-          #+#    #+#             */
/*   Updated: 2025/09/29 12:44:38 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') | (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isalpha('a'));
	printf("%d", ft_isalpha('G'));
	printf("%d", ft_isalpha('z'));
	printf("%d", ft_isalpha('Z'));
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('2'));
	printf("%d", ft_isalpha('-'));
	return (0);
}*/
