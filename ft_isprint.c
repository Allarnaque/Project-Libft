/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:07:06 by adebert           #+#    #+#             */
/*   Updated: 2023/11/26 20:05:59 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c);

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (16384);
	return (0);
}

/*int main()
{
    int c = 0;
    __builtin_printf("%d\n", ft_isprint(c));
    __builtin_printf("%d\n", isprint(c));
    return (0);
}*/