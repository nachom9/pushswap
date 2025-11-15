/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:00:56 by imelero-          #+#    #+#             */
/*   Updated: 2025/09/30 16:08:42 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_tolower(2));
	printf("%c\n", tolower(2));
	return (0);
}*/
