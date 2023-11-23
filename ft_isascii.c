/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:35:09 by adebert           #+#    #+#             */
/*   Updated: 2023/11/07 13:37:21 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_isascii(int c);

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
            return (1);
    return (0);
}

/*int main()
{
    int c = 150;
    __builtin_printf("%d\n", ft_isascii(c));
    __builtin_printf("%d\n", isascii(c));
    return (0);
}*/