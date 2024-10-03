/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:34:24 by aneme             #+#    #+#             */
/*   Updated: 2024/10/02 01:40:26 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	char	c;

	c = '-';
	if (ft_isascii(c))
	{
		printf("%c es un caracter ascii.\n", c);
	}
	else
	{
		printf("%c no es un caracter ascii.\n", c);
	}
	return (0);
}
