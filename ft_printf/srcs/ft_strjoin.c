/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/28 18:00:01 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/05/28 18:00:06 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	destlen;

	if (!s1 || !s2)
		return (NULL);
	dest = NULL;
	destlen = ft_strlen(s1) + ft_strlen(s2);
	if (s1 && s2)
	{
		dest = ft_strnew(destlen);
		if (!dest)
			return (NULL);
		ft_strcpy(dest, s1);
		ft_strcat(dest, s2);
	}
	return (dest);
}
