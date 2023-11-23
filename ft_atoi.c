/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 01:21:12 by allan             #+#    #+#             */
/*   Updated: 2023/11/21 16:20:45 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr);

int ft_atoi(const char *nptr)
{
    int sign;
    int nbr;

    nbr = 0;
    sign = 1;
    if (*nptr == '\0')
        return  (0);
    while   (*nptr >= '\a' && *nptr <= '\r' || *nptr == 32)
        nptr++;
    if   (*nptr == '+' || *nptr == '-')
    {
        if  (*nptr == '-')
            sign = sign * -1;
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
    {
        nbr = (nbr * 10) + (*nptr - '0');
        nptr++;
    }
        return  (nbr * sign);
}

/*int main()
{
    const char nptr[] = "           -1 00ab";
    __builtin_printf("%d\n", ft_atoi(nptr));
    __builtin_printf("%d\n", atoi(nptr));
    return (0);
}*/