/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:36:22 by aneme             #+#    #+#             */
/*   Updated: 2024/10/03 21:20:02 by aneme            ###   ########.fr       */
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
    
    if (*s == '\0')
        return NULL;
    
    str_len = ft_strlen(s);
    
    //if (start >= str_len)
      //  return strdup("");  // Devolvemos una cadena vacía

    // Ajustar 'len' si es necesario
    if (len > str_len - start)
        len = str_len - start;

    // Reservar memoria para la subcadena (len + 1 para el carácter nulo)
    substr = (char *)malloc(sizeof(char) * (len - start + 1));
    if (substr == NULL)
        return NULL;  // Devolver NULL si falla la asignación de memoria

    // Copiar los caracteres desde 's' a la nueva subcadena
    i = 0;
    while (i < len) {
        substr[i] = s[start + i];
        i++;
    }

    // Asegurarnos de que la subcadena esté terminada con un carácter nulo
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