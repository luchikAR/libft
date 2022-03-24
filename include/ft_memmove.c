/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:34:49 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/10 16:47:26 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dest == 0 && src == 0)
		return (0);
	d = (char*)dest;
	s = (char*)src;
	if (d < s)
		while (n-- > 0)
			*d++ = *s++;
	else
	{
		d += (n - 1);
		s += (n - 1);
		while (n-- > 0)
			*d-- = *s--;
	}
	return (dest);
}
