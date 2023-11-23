/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:10:37 by allan             #+#    #+#             */
/*   Updated: 2023/11/23 16:14:36 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set);

size_t     ft_lendest(char const *s1, char const *set, size_t i)
{
    size_t  j;

    j = 0;
    if(i == 0)
        while(set[j])
        {
            while(s1[i] == set[j])
            {
                i++;
                j = 0;
            }
            j++;
        }
    else
        while(set[j])
        {
            while(s1[i] == set[j])
                {
                    i--;
                    j = 0;
                }
            j++;
        }
    return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char *dest;
    size_t  lendest;
    size_t  start;
    size_t  end;

    start = 0;
    end = ft_strlen(s1) - 1;
    start = ft_lendest(s1, set, start);
    end = ft_lendest(s1, set, end);
    lendest = end - start;
    dest = malloc((lendest + 1) * sizeof(char));
    if(!dest)
        return(NULL);
    lendest = 0;
    while (start < end)
    {
        dest[lendest] = s1[start];
        lendest++;
        start++;
    }
    dest[lendest] = '\0';
    return(dest);
}

/*int main()
{
    char s1[] = "11113H3ello les Potes31111";
    char set[] = "123";
    printf("%s", ft_strtrim(s1, set));
    return  (0);
}*/