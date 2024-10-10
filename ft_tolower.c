/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:20:45 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 21:42:17 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'L';
	printf("'%c' en minus es '%c'\n", c, ft_tolower(c));
	c = 'h';
	printf("'%c' en minus es '%c'\n", c, ft_tolower(c));
	return (0);
}*/
