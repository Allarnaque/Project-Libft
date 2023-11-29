/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:10:46 by allan             #+#    #+#             */
/*   Updated: 2023/11/29 13:11:01 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*((char *)s + i) == (unsigned char)c)
			return (((char *)s + i));
		i--;
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