/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:05:01 by aneme             #+#    #+#             */
/*   Updated: 2024/10/02 01:12:09 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

int	main(void)
{
	char	c;

	c = 'd';
	printf("'%c' en mayus es '%c'\n", c, ft_toupper(c));
	c = 'K';
	printf("'%c' en mayus es '%c'\n", c, ft_toupper(c));
	return (0);
}
