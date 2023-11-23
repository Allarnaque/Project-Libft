/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:23:21 by allan             #+#    #+#             */
/*   Updated: 2023/11/23 13:31:27 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_comp(char c, char const *comp);

int    ft_comp(char c, char const *comp)
{
    while(*comp)
    {
        if(*comp == c)
            return (1);
        comp++;
    }
    return (0);
}

int main()
{
    char const  comp[] = "123 ";
    char str[] = " H12el333lo le123s Potes2131";
    char dest[14];
    int i = 0;
    int j = 0;
    while(str[i])
    {
        while(ft_comp(str[i], comp))
            i++;
        dest[j] = str[i];
        j++;
        i++;
    }
    printf("%s", dest);
    return (0);
}