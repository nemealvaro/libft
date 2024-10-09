/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:27:01 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 14:27:04 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char     ft_toouper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char    *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    unsigned int    i;
    size_t  len;
    char    *str;

    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    str = (char *)malloc (sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    char string[] = "peace sells";
    char *result = ft_strmapi(string, ft_toouper);
    if (result)
    {
        printf("Result: %s\n", result);
        free(result);
    }
    return (0);
}