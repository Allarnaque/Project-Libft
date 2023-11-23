/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/07 14:49:07 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_isprint(int c);

int ft_isprint(int c)
{
    if(c >= 32 && c <= 127)
            return (16384);
    return (0);
}

/*int main()
{
    int c = 0;
    __builtin_printf("%d\n", ft_isprint(c));
    __builtin_printf("%d\n", isprint(c));
    return (0);
}*/