/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:50:01 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:29:34 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *out;
	t_list *tmp;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&out, del);
			return (NULL);
		}
		ft_lstadd_back(&out, tmp);
		lst = lst->next;
	}
	return (out);
}
