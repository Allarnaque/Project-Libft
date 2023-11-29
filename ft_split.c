/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/29 17:06:29 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

static int	sep_count(char *str, char sep)
{
	if (*str == sep)
		return (1);
	return (0);
}

static int	ft_words(char *str, char sep)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	if (sep_count(&str[0], sep) == 0)
		words++;
	while (str[i])
	{
		if (sep_count(&str[i], sep))
		{
			if (str[i + 1] && sep_count(&str[i + 1], sep) == 0)
				words++;
		}
		i++;
	}
	return (words);
}

static void	ft_free(char**split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
}

static char	*ft_strdup_split(char *str, char c, char **split)
{
	char	*new;
	int		i;
	int		len;

	len = 0;
	while (str[len] && sep_count(&str[len], c) == 0)
		len++;
	i = 0;
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!new)
	{
		ft_free(split);
		return (NULL);
	}
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	*str;
	char	**split;

	str = (char *)s;
	i = 0;
	words = ft_words(str, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (0);
	while (*str)
	{
		while (sep_count(str, c) && *str)
			str++;
		if (*str)
		{
			split[i] = ft_strdup_split(str, c, split);
			i++;
		}
		while (sep_count(str, c) == 0 && *str)
			str++;
	}
	split[i] = 0;
	return (split);
}

/*int	main()
{
	char *str = "     Hello                             les Potes  ";
	char c = ' ';
	char **split;
	int		i = 0;
	split = ft_split(str, c);
	while (split[i])
	{	
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}*/