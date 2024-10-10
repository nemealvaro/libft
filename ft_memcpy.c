/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:09:31 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 21:42:00 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*s;
	size_t				i;

	s = (const unsigned char *)src;
	p = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	src[] = "Holaa, Mundo";
	char	dst[20];

	ft_memcpy(dst, src, sizeof(src));
	printf("Fuente: %s\n", src);
	printf("Destino: %s\n", dst);
	return (0);
}
*/