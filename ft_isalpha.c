/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adebert <adebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:48:50 by adebert           #+#    #+#             */
/*   Updated: 2023/11/07 12:21:23 by adebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)

int ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            return (1024);
        }
    return (0);
}

/*int main()
{
    int c = 'D';
    __builtin_printf("%d", ft_isalpha(c));
    return (0);
}*/