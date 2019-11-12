/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:06:25 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:34:54 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (!len || !s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	(void)ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
