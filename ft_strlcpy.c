/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/09 15:46:13 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <unistd.h>
#define SIZE 50

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t srclen = ft_strlen(src);

    if (src[srclen + 1] != '\0')
        return (1);
    
    while(*src && --size)
        {
            *dst = *src;
            src++;
            dst++;
        }
    *dst = '\0';
    return (srclen);
}

/*int main()
{
    const char src[] = "Hello";
    char dst[] = "Salut les potes";
    __builtin_printf("%lu\n", (unsigned long)ft_strlcpy(dst, src, SIZE));
    __builtin_printf("%s\n", dst);
    //__builtin_printf("%lu", strlcpy(dst, src, size));
    return (0);
}*/