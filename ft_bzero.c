/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/09 18:20:44 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void    ft_bzero(void *s, size_t n)
{
    char    *i;

    i = s;
    while(n)
    {
        *i++ = 0;
        n--;
    }
}

/*int main()
{
    char str[5] = "Hello";
    bzero(str, 5);
    __builtin_printf("%s", str);
    return (0);
}*/