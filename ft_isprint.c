/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:50:34 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 21:41:56 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = '\0';
	if (ft_isprint(c))
	{
		printf("%c es implimible.\n", c);
	}
	else
	{
		printf("%c no es imprimible.\n", c);
	}
	return (0);
}*/
