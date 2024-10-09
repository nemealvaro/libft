/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:46:57 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 21:41:57 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = '0';
	if (ft_isdigit(c))
	{
		printf("%c es un numero.\n", c);
	}
	else
	{
		printf("%c no es un numero.\n", c);
	}
	return (0);
}*/
