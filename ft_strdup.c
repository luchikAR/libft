/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:49:10 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/10 14:53:32 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*s2;
	char	*tab;
	int		i;
	char	*save_tab;

	s2 = (char*)s;
	i = 0;
	while (s2[i] != '\0')
		i++;
	tab = malloc(sizeof(char) * i + 1);
	if (tab == 0)
		return (((void *)0));
	save_tab = tab;
	i = 0;
	while (s2[i] != '\0')
	{
		*tab = s2[i];
		i++;
		tab++;
	}
	*tab = '\0';
	return (save_tab);
}
