/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:33:27 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:30:47 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*srcn = (char *)src;
	char		*dstn;

	dstn = (char *)dst;
	if (!dst && !src)
		return (dst);
	if (srcn < dstn)
		while ((int)(--len) >= 0)
			*(dstn + len) = *(srcn + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
