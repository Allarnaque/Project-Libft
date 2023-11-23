/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:31:43 by allan             #+#    #+#             */
/*   Updated: 2023/11/21 16:25:51 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size);

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * sizeof(size));
    bzero (ptr, nmemb * size);
    
    return (ptr);
}

int main()
{
    int *arr;
    int *arr2;

    arr = (int*)calloc(1000, sizeof(int));
    arr2 = (int*)ft_calloc(1000, sizeof(int));

    for (size_t i = 0; i < 100; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n\n");
    for (size_t i = 0; i < 100; i++)
    {
        printf("%d", arr2[i]);
    }
    return (0);
    
}