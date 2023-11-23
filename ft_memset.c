/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/09 18:28:03 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    char    *i;

    i = s;
    while(n)
    {
        *i++ = c;
        n--;
    }
    return  (s);
}

/*int main()
{
    char str[10];
    ft_memset(str, '$', 7);
    __builtin_printf("%s\n", str);
    return (0);
}*/
