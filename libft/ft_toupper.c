/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:52:28 by imelero-          #+#    #+#             */
/*   Updated: 2025/09/30 15:59:57 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c -32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%c\n", ft_toupper('z'));
	printf("%c", ft_toupper('z'));
	return (0);
}*/
