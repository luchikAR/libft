/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:36:00 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/10 17:28:25 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			n2;

	n2 = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (n > n2)
	{
		if (str1[n2] != str2[n2])
			return (str1[n2] - str2[n2]);
		n2++;
	}
	return (0);
}
