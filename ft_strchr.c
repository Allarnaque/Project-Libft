/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:10:46 by allan             #+#    #+#             */
/*   Updated: 2023/11/26 20:27:24 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}

/*int main()
{
    int c = 98;
    const char s[] = "Helbloa";
    __builtin_printf("%s", ft_strchr(s, c));
    __builtin_printf("%s", strchr(s, c));
    return (0);

}*/