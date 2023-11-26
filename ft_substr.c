/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:23:21 by allan             #+#    #+#             */
/*   Updated: 2023/11/26 20:49:36 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *source, unsigned int start, size_t len);

char	*ft_substr(char const *source, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = malloc(len * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (source[start] && i < len)
	{
		dest[i] = source[start];
		i++;
		start++;
	}
	return (dest);
}

/*int main()
{
    char const  source[] = "Hello";

    printf("%s", ft_substr(source, 0, 3));
    return (0);
}*/