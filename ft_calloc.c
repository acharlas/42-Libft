/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:58:58 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:25:38 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *dst;

	if (!count || !size)
	{
		size = 1;
		count = 1;
	}
	if (!(dst = malloc(size * count)))
		return (NULL);
	ft_bzero(dst, size * count);
	return (dst);
}
