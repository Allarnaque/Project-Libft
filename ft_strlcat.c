/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/25 18:48:09 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIZE 50

size_t  ft_strlcat(char *dst, const char *src, size_t size);

static int str_len(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstlen;
    size_t srclen;
    size_t i;
    size_t j;

    dstlen = str_len(dst);
    srclen = str_len(src);
    if (size - 1 <= dstlen)
    {
        return (size + srclen);
    }
    i = dstlen;
    j = 0;
    while (src[j])
    {
        if (j < (size - dstlen - 1))
        {
            dst[i] = src[j];
            i++;
        }
        j++;
    }
    dst[i] = '\0';
    return (dstlen + srclen);
}

/*int main()
{
    const char *src = "ca va ?";
    char dst[30] = "Salut les petit potes comment";
    ft_strlcat(dst, src, SIZE);
    __builtin_printf("%zu\n%s\n", ft_strlcat(dst, src, SIZE), dst);
    return (0);
}*/