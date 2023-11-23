/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/23 16:14:34 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s);

size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i])
        i++;
    return (i);

}

/*int main()
{
    const char s[] = "dkskdskosjdoijfsofd";
    __builtin_printf("%lu\n", (unsigned long)ft_strlen(s));
    __builtin_printf("%lu\n", strlen(s));
    return (0);
}*/