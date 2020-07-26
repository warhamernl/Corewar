/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: igvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/30 17:43:55 by igvan-de      #+#    #+#                 */
/*   Updated: 2020/04/30 17:44:36 by igvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t index;
	size_t index2;
	size_t dst_len;
	size_t src_len;

	index = 0;
	index2 = 0;
	dst_len = ft_strlen(&dst[index]);
	src_len = ft_strlen(&src[index]);
	if (ft_strlen(dst) >= size)
		return (size + src_len);
	while (dst[index])
		index++;
	while (size - 1 > dst_len)
	{
		dst[index] = src[index2];
		index++;
		index2++;
		size--;
	}
	dst[index] = '\0';
	return (dst_len + src_len);
}
