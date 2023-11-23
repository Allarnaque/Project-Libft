/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:42:13 by allan             #+#    #+#             */
/*   Updated: 2023/11/21 16:18:20 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *f1;
    unsigned char *f2;

    f1 = (unsigned char *)s1;
    f2 = (unsigned char *)s2;
    if (n == 0)
        return (0);
    while (*f1 && *f1 == *f2 && n > 1)
    {
        f1++;
        f2++;
        n--;
    }
    return (*f1 - *f2);
}

int main()
{
    char *s1 = "Hello";
    char *s2 = "Hella";
    size_t n = 5;
    __builtin_printf("%d\n", ft_memcmp(s1, s2, n));
    __builtin_printf("%d", memcmp(s1, s2, n));
    return (0);   
}