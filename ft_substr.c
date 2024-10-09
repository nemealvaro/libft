/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:36:22 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 21:42:16 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t str_len;
    
    if (!s)
        return NULL;
    str_len = ft_strlen(s);
    if (start >= str_len)
      return ft_strdup("");
    if (len > str_len - start)
        len = str_len - start;
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (substr == NULL)
        return NULL;
    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return substr;
}
/*
int main()
{
    char    *string = "zombie pelado";
    char    *result = ft_substr(string, 3, 6);
    printf("%s\n", result);
    free(result);
    return (0);
}*/