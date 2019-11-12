/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:11:50 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:32:18 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	tot;

	if (!s1 || !s2)
		return (NULL);
	tot = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(dst = malloc(sizeof(char) * tot)))
		return (NULL);
	dst = ft_memcpy(dst, s1, ft_strlen(s1) + 1);
	(void)ft_strlcat(dst, s2, tot);
	return (dst);
}
