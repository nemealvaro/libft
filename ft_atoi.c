/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:55:26 by aneme             #+#    #+#             */
/*   Updated: 2024/10/08 18:13:02 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char	str1[] = "   -123";
	char	str2[] = "42";
	char	str3[] = "+567";
	char	str4[] = "abc123";

	printf("String '%s' converted to int: %d\n", str1, ft_atoi(str1));
	printf("String '%s' converted to int: %d\n", str2, ft_atoi(str2));
	printf("String '%s' converted to int: %d\n", str3, ft_atoi(str3));
	printf("String '%s' converted to int: %d\n", str4, ft_atoi(str4));
	return (0);
}
