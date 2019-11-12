/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>              +#+  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:11:03 by acharlas            #+#    #+#           */
/*   Updated: 2019/11/12 18:34:15 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*out;
	int		i;

	i = 0;
	if (!(out = ft_calloc(sizeof(char), n + 1)))
		return (NULL);
	while (*s1 && n--)
	{
		out[i] = s1[i];
		i++;
	}
	return (out);
}
