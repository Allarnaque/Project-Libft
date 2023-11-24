/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:52:08 by allan             #+#    #+#             */
/*   Updated: 2023/11/24 16:00:01 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _LIBFT_H_
#define _LIBFT_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ft_atoi(const char *nptr);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_itoa(int n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
char    **ft_split(char const *s, char c);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlen(const char *s);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_strrchr(const char *s, int c);
int    ft_tolower(int ch);
int    ft_toupper(int ch);
char    *ft_substr(char const *source, unsigned int start, size_t len);


int    ft_comp(char c, char const *comp);
#endif
