/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:01:18 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/23 10:55:33 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*src_now;
	size_t	n;

	src_now = (char*)src;
	n = 0;
	if (src == 0)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while ((size - 1 > n) && (src_now[n] != '\0'))
	{
		dst[n] = src_now[n];
		n++;
	}
	dst[n] = '\0';
	return (ft_strlen(src));
}
