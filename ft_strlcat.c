/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/09 18:02:09 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <unistd.h>
#define SIZE 50

int str_len(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size) //size = lenght dest + nombre de caractere de src que l'on peut copier dans dest
{
    size_t dstlen;
    size_t srclen;
    int i;
    int j;

    dstlen = str_len(dst);
    srclen = str_len(src);
    __builtin_printf("%zu\n", dstlen);
    __builtin_printf("%zu\n", srclen);
    
    if (size - 1 <= dstlen)
        return (size + srclen);

    i = dstlen;
    j = 0;
    while (src[j])
    {
        if (j < size - dstlen - 1)
        {
            dst[i] = src[j];
            i++;
        }
        j++;
    }
    dst[i] = '\0';
    return (dstlen + srclen);
}

int main()
{
    const char *src = "ca va ?";
    char dst[30] = "Salut les petit potes comment";
    ft_strlcat(dst, src, SIZE);
    __builtin_printf("%zu\n%s\n", ft_strlcat(dst, src, SIZE), dst);
    return (0);
}