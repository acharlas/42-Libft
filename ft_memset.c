/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:54:29 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:31:00 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bst;
	unsigned char	cst;

	cst = (unsigned char)c;
	bst = (unsigned char *)b;
	while (len--)
		*bst++ = cst;
	return (b);
}
