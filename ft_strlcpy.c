/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharlas <acharlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:09:05 by acharlas          #+#    #+#             */
/*   Updated: 2019/11/12 18:32:37 by acharlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	if (!src || !dest)
		return (0);
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while (src[i] != '\0' && size != 1)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (len);
}
