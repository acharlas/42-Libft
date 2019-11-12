/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:40:30 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:28:43 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *lstcpy;
	t_list *last;

	lstcpy = *lst;
	last = NULL;
	if (!lst || !*lst || !del)
		return ;
	while (lstcpy)
	{
		if (last)
			free(last);
		last = lstcpy;
		del(lstcpy->content);
		lstcpy = lstcpy->next;
	}
	if (last)
		free(last);
	*lst = NULL;
}
