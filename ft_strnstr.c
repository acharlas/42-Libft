/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:56:05 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:34:24 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	i = 0;
	needle_len = ft_strlen((char *)needle);
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i] && len >= needle_len)
	{
		if (!ft_memcmp(&haystack[i++], needle, needle_len))
			return ((char *)(&haystack[i - 1]));
		len--;
	}
	return (0);
}
