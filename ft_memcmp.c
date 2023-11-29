/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:42:13 by allan             #+#    #+#             */
/*   Updated: 2023/11/29 13:31:41 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f1;
	unsigned char	*f2;

	f1 = (unsigned char *)s1;
	f2 = (unsigned char *)s2;
	while (n)
	{
		if (*f1 != *f2)
			return (*f1 - *f2);
		f1++;
		f2++;
		n--;
	}
	return (0);
}

/*int main()
{
    char *s1 = "atoms\0\0\0\0";
    char *s2 = "atoms\0abc";
    size_t n = 8;
    __builtin_printf("%d\n", ft_memcmp(s1, s2, n));
    __builtin_printf("%d", memcmp(s1, s2, n));
    return (0);   
}*/
