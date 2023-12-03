/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:07:32 by allan             #+#    #+#             */
/*   Updated: 2023/12/03 10:14:22 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !(*lst) || !del)
		return ;
	if ((*lst)->next)
		ft_lstclear(&(*lst)->next, del);
	(*del)((*lst)->content);
	free (*lst);
	*lst = NULL;
}
