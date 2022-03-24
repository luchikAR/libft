/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:31:06 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/23 16:14:37 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	int		k;
	char	*p;
	char	*c;

	if (src == 0 && dest == 0)
		return (0);
	p = (char *)dest;
	c = (char *)src;
	k = 0;
	while (count-- > 0)
	{
		c = (char *)src + k++;
		*p++ = *c;
	}
	return (dest);
}
