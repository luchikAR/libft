/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:26:17 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/24 08:26:08 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_now;
	unsigned char	*s2_now;
	size_t			n2;

	n2 = 0;
	s1_now = (unsigned char*)s1;
	s2_now = (unsigned char*)s2;
	while (n > n2 && s1_now[n2] && s2_now[n2])
	{
		if (s1_now[n2] != s2_now[n2])
			return (s1_now[n2] - s2_now[n2]);
		else
			n2++;
	}
	if (n2 == n)
		n2--;
	return (s1_now[n2] - s2_now[n2]);
}
