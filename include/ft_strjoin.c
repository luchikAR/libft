/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:27:57 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/23 12:47:22 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1_now;
	char	*s2_now;
	char	*res;
	int		i;

	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	i = 0;
	s1_now = (char *)s1;
	s2_now = (char *)s2;
	res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (res == 0)
		return (NULL);
	while (*s1_now != '\0')
		res[i++] = *s1_now++;
	while (*s2_now != '\0')
		res[i++] = *s2_now++;
	res[i] = '\0';
	return (res);
}
