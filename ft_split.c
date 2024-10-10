/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:46:56 by aneme             #+#    #+#             */
/*   Updated: 2024/10/10 18:27:20 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int     count_words(const char *s, char c)
{
    size_t  count;
    size_t  i;
    
    if (s == NULL)
        return (0);
    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            count++;
        i++;
    }
    return (count);
}

int     words_len(const char *s, char c)
{
    size_t  len;

    if (s == NULL)
        return (0);
    len = 0;
    while (s[len] && s[len] != c)
        len++;
    return (len);
}

void    free_split(char **split)
{
    size_t  i;

    if (split == NULL)
        return;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
}
char **ft_split(char const *s, char c)
{
    char    **split;
    size_t  i;
    size_t  j;
    size_t  start;
    
    if (!s || !(split = (char **)malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			i += words_len(&s[i], c);
			if (!(split[j++] = ft_substr(s, start, i - start)))
				return (free_split(split), NULL);
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}
/*
int main(int argc, char **argv)
{
    char **result;
    int i;
    char delimiter;

    // Verifica que los argumentos sean correctos
    if (argc != 3)
    {
        printf("Uso: %s <cadena> <delimitador>\n", argv[0]);
        return (1);
    }

    // El delimitador es el primer carácter del segundo argumento
    delimiter = argv[2][0];

    // Llama a ft_split con la cadena pasada como argumento y el delimitador
    result = ft_split(argv[1], delimiter);
    if (!result)
    {
        printf("Error: la división falló\n");
        return (1);
    }

    // Imprime el resultado de ft_split
    i = 0;
    while (result[i])
    {
        printf("Palabra %d: %s\n", i, result[i]);
        i++;
    }

    // Libera la memoria asignada para el array de strings
    free_split(result);

    return (0);
}*/