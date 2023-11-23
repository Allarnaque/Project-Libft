/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/22 11:58:14 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_isdigit(int c);

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
            return (2048);
    return (0);
}

/*int main()
{
    int c = 47;
    __builtin_printf("%d\n", ft_isdigit(c));
    __builtin_printf("%d\n", isdigit(c));
    return (0);
}*/