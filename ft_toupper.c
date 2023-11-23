/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:12:31 by allan             #+#    #+#             */
/*   Updated: 2023/11/21 16:15:11 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int    ft_toupper(int ch);

int    ft_toupper(int ch)
{
    if (ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
        return (ch);
    }
    return (ch);
}

/*int main()
{
    int ch = '9';

    printf("%c\n", ft_toupper(ch));
    printf("%c", toupper(ch));
    return (0);
}*/


