/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:32:14 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/23 15:39:07 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*src_now;
	unsigned char	c2;

	d = (unsigned char *)dest;
	src_now = (unsigned char *)src;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = src_now[i];
		if (src_now[i] == c2)
			return ((void *)&d[i + 1]);
		i++;
	}
	return (NULL);
}
