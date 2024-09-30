/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:36:22 by aneme             #+#    #+#             */
/*   Updated: 2024/09/30 16:53:11 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t str_len;
    
    if (*s == '\0')
        return NULL;
    
    str_len = strlen(s);
    
    //if (start >= str_len)
      //  return strdup("");  // Devolvemos una cadena vacía

    // Ajustar 'len' si es necesario
    if (len > str_len - start)
        len = str_len - start;

    // Reservar memoria para la subcadena (len + 1 para el carácter nulo)
    substr = (char *)malloc(sizeof(char) * (len + 1));
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

int main() {
    char *original = "Hello, world!";
    char *sub;

    // Extraer una subcadena desde el índice 7 con longitud máxima 5
    sub = ft_substr(original, 7, 5);
    
    if (sub != NULL) {
        printf("Subcadena: %s\n", sub);  // Debería imprimir "world"
        free(sub);  // No olvidar liberar la memoria
    }

    return 0;
}