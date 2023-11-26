/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/26 20:51:19 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;

	str1 = dest;
	str2 = src;
	while (n)
	{
		*str1++ = *str2++;
		n--;
	}
	return (dest);
}

/*int main()
{
    char dest[5] = "Alors";
    char src[5] = "Hello";
    ft_memcpy(dest, src, 2);
    __builtin_printf("%s\n", dest);
    return (0);
}*/