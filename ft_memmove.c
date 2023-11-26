/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/26 21:11:48 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;
	char		*temp;
	int			i;

	temp = 0;
	str1 = dest;
	str2 = src;
	i = 0;
	while (n)
	{
		temp[i] = *str2++;
		*str1++ = temp[i];
		n--;
		i++;
	}
	return (dest);
}

/*int main()
{
    char dest[5] = "Alors";
    char src[5] = "Hello";
    ft_memmove(dest, src, 6);
    __builtin_printf("%s\n", dest);
    return (0);
}*/