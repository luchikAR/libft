/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:35:29 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/10 15:54:54 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *p;

	p = (char*)s;
	while (n-- > 0)
	{
		if (*p == c)
			return (p);
		else
			(void)*p++;
	}
	return (0);
}
