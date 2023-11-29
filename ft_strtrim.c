/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:10:37 by allan             #+#    #+#             */
/*   Updated: 2023/11/29 18:20:13 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

static size_t	ft_ctest(char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lendest;
	size_t	start;
	size_t	end;
	char	*dest;

	start = 0;
	while (s1[start] && ft_ctest((char *)set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_ctest((char *)set, s1[end]))
		end--;
	lendest = end - start;
	dest = malloc((lendest + 2) * sizeof(char));
	if (!dest)
		return (NULL);
	end = 0;
	while (end <= lendest)
	{
		dest[end] = s1[start];
		end++;
		start++;
	}
	dest[end] = '\0';
	return (dest);
}

/*int main()
{
    char s1[] = "ABhelloACB";
    char set[] = "ABC";
    printf("%s", ft_strtrim(s1, set));
    return  (0);
}*/