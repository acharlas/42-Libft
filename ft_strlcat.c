/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:21:21 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:32:27 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		u;
	size_t		dlen;

	d = dst;
	s = src;
	u = dstsize;
	while (u-- && *d)
		d++;
	dlen = d - dst;
	u = dstsize - dlen;
	if (!u)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (u != 1)
		{
			*d++ = *s;
			u--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
