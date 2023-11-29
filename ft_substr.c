/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:23:21 by allan             #+#    #+#             */
/*   Updated: 2023/11/29 18:24:41 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *source, unsigned int start, size_t len);

static char	*ft_check(char const *source, unsigned int start, size_t len)
{
	char	*dest;

	dest = malloc(1 * sizeof(char));
	if (!dest)
		return (NULL);
	*dest = '\0';
	if (start < ft_strlen(source) && len <= ft_strlen(source))
		return (NULL);
	if (start < ft_strlen(source) && len >= ft_strlen(source))
		return (NULL);
	if (len == 0 || ((start + len) > ft_strlen(source) || !source)
		|| len > ft_strlen(source) || start >= ft_strlen(source))
		return (dest);
	return (NULL);
}

char	*ft_substr(char const *source, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (ft_check(source, start, len) != NULL)
		return (dest = ft_check(source, start, len));
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (source[start] && i < len)
	{
		dest[i] = source[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
