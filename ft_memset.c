/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:52:01 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 21:42:01 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *dest, int value, size_t num)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)dest;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	buffer[10];
	int		i;

	ft_memset(buffer, 'A', sizeof(char) * 5);
	ft_memset(buffer + 5, 't', sizeof(char) * 5);
	i = 0;
	while (i < 10)
	{
		printf("%c", buffer[i]);
		i++;
	}
	return (0);
}*/
