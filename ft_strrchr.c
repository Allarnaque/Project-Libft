/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:10:46 by allan             #+#    #+#             */
/*   Updated: 2023/11/21 16:16:04 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strrchr(const char *s, int c);

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while(*s)
    {
        s++;
        i++;
    }    
    while(i >= 0)
    {
        if(*s == c)
                return ((char *)s);
        i--;
        s--;
    }
    return (NULL);

}

/*int main()
{
    int c = 98;
    const char s[] = "kgbjgnb";
    __builtin_printf("%s", ft_strrchr(s, c));
    __builtin_printf("%s", strrchr(s, c));
    return (0);

}*/