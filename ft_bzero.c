/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:42:41 by aneme             #+#    #+#             */
/*   Updated: 2024/10/08 18:13:07 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

int	main(void)
{
	char	buffer[10];
	int		ind;
	int		in;

	ind = 0;
	while (ind < 10)
	{
		buffer[ind] = 'K';
		ind++;
	}
	ft_bzero(buffer, 5);
	in = 0;
	while (in < 10)
	{
		printf("%d", buffer[in]);
		in++;
	}
	return (0);
}
