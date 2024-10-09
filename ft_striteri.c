/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:48:35 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 18:32:43 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void     ft_tooupper(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	return;
}

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
    return;
}
/*
int main (void)
{
    char    str[] = "megadeth";
    ft_striteri(str, ft_tooupper);
    printf("Resultado: %s\n", str);
    return (0);
}*/