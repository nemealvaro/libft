/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:48:18 by aneme             #+#    #+#             */
/*   Updated: 2024/10/02 21:26:00 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *join_str;
    size_t  len1;
    size_t  len2;
    size_t  i;
    size_t  j;
    
    if (s1 == NULL || s2 == NULL)
        return NULL;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    join_str = (char *)malloc(len1 + len2 + 1);
    if (join_str == NULL)
        return NULL;
    i = -1;
    while (++i < len1)
       join_str[i] = s1[i];
    j = -1;
    while (++j < len2)
       join_str[i + j] = s2[j];
    join_str[i + j] = '\0';
    return (join_str);
}

#include <stdio.h>
int main (void)
{
        printf("%s\n", ft_strjoin("hola,", " aleman!"));
    return 0;
}