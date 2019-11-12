/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:07:37 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:30:05 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*bdst;
	unsigned char	*bsrc;
	size_t			i;

	i = 0;
	bdst = (unsigned char *)dst;
	bsrc = (unsigned char *)src;
	while (i < n)
	{
		bdst[i] = bsrc[i];
		if (bdst[i++] == (unsigned char)c)
			return (dst + i);
	}
	return (0);
}
