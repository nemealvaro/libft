/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneme <aneme@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:56:48 by aneme             #+#    #+#             */
/*   Updated: 2024/10/09 19:04:52 by aneme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

size_t  ft_strlen(const char *s);
void    *ft_memset(void *dest, int value, size_t num);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t len);
size_t  ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dest, const char *src, size_t dstsize);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(char c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s);
char    *ft_substr(char const *s, unsigned int start, size_t len);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
//char    **ft_split(char const *s, char c);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strmapi(char const *s, char(*f)(unsigned int, char));
char    *ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);

#endif