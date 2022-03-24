/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:11:33 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/23 12:39:15 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	char			*res;
	unsigned int	i;
	unsigned int	i2;

	s2 = (char*)s;
	i = 0;
	i2 = 0;
	if (s == NULL)
		return (NULL);
	while (i2 != start && s2[i2] != '\0')
		i2++;
	res = (char *)malloc(len + 1);
	if (res == 0)
		return (NULL);
	while (s2[i2] != '\0' && len-- > 0)
		res[i++] = s2[i2++];
	res[i] = '\0';
	return (res);
}
