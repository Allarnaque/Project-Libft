/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:30:15 by allan             #+#    #+#             */
/*   Updated: 2023/11/29 12:57:05 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return (((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}

/*int main()
{
    char str[] = "";
    int c = 97;
    size_t n = 5;
    char *find = ft_memchr(str, c, n);
    char *truefind = memchr(str, c, n);
    __builtin_printf("%s\n", find);
    __builtin_printf("%s", truefind);
    return (0);   
}*/