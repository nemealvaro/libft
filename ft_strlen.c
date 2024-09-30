/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:14:15 by aneme             #+#    #+#             */
/*   Updated: 2024/09/28 20:14:24 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}

int	main(void)
{
	const char *str = "four horsemen";
	printf("el tamaño de la string es: %zu\n", ft_strlen(str));
	return 0;
}
