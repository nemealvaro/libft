/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:04:35 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 18:32:27 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
   size_t   i;

   if (!s)
        return (NULL);
   i = 0;
   while (s[i] != '\0')
   {
        write (fd, &s[i], 1);
        i++;
   }
   return (0);
}
/*
int main(void)
{
    char    str[] = "hello world";
    
}*/