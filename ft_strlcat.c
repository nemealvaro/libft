/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:33:02 by aneme             #+#    #+#             */
/*   Updated: 2024/10/11 12:04:31 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= dstsize)
	{
		return (dstsize + srclen);
	}
	i = 0;
	while (i < (dstsize - dstlen - 1) && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
int	main(void)
{
	char	buffer[15] = "Hello";
	char	*src;
	size_t	result;

	src = ", world!";
	result = ft_strlcat(buffer, src, sizeof(buffer));
	printf("Cadena concatenada: %s\n", buffer);
	printf("Longitud total de la cadena resultante: %zu\n", result);
	return (0);
}*/
