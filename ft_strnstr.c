/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:11:49 by allan             #+#    #+#             */
/*   Updated: 2023/11/21 20:55:51 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len);

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;
    char *found;

    i = 0;
    j = 0;
    found = (char *)big;
    if(little[j] == '\0')
        return ((char *) big);
    while(big[i] && len > 0)
    {
        while (big[i] != little[j] && len > 0)
        {
            i++;
            len--;
        }
        found = (char *)&big[i];
        while(big[i] == little[j] && len > 0)
        {
            i++;
            j++;
            len--;
        }
        if(little[j] == '\0')
            { 
                return (found);
            }
        j = 0;

    }
    return (NULL);
}

int main()
{
    const char big[] = "bohehehel";
    const char little[] = "he";
    size_t len = 9;
    printf("%s\n", ft_strnstr(big, little, len));
    return (0);
}