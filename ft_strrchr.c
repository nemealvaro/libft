/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:41:58 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 21:42:15 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	if (!str)
		return(NULL);	
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("hola mundo", 'm'));
	return (0);
}*/