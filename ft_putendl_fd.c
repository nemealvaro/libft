/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:02:34 by aneme             #+#    #+#             */
/*   Updated: 2024/10/07 18:07:14 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
    size_t  i;

    if (!s)
        return NULL

    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s, 1);
        i++;
    }
    write (fd, '\n', 1);
}