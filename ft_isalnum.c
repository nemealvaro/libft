/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:05:31 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 18:30:44 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;

	c = '-';
	if (ft_isalnum(c))
	{
		printf("%c es alfanumerico.\n", c);
	}
	else
	{
		printf("%c no es alfanumerico.\n", c);
	}
	return (0);
}*/
