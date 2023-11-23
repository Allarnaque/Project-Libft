/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:56:04 by allan             #+#    #+#             */
/*   Updated: 2023/11/21 20:51:47 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2);

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *dest;
    size_t  destlen;

    destlen = strlen(s1) + strlen(s2);
    dest = malloc(destlen * sizeof(char));
    if (!dest)
        return  (NULL);
    
    
    while (*s1)
        *dest++ = *s1++;
    while (*s2)
        *dest++ = *s2++;
    *dest = '\0';
    dest = dest - destlen;
    return (dest);
}

/*int main()
{
    char s1[] = "Hello";
    char s2[] = "Les Potes";
    printf("%s", ft_strjoin(s1, s2));
    return (0);
}*/