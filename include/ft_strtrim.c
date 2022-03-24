/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:15:43 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/23 15:50:57 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_start(const char *s1, const char *set)
{
	int i1;
	int i2;
	int flag;

	flag = 1;
	i1 = 0;
	while (flag == 1 && s1[i1] != '\0')
	{
		i2 = 0;
		while (i2 <= (int)ft_strlen(set))
		{
			if (s1[i1] == set[i2++])
			{
				flag = 1;
				break ;
			}
			else
				flag = 0;
		}
		i1++;
	}
	if (flag == 0)
		i1--;
	return (i1);
}

static void		ft_end(const char *s1, const char *set, int *count_end)
{
	int i1;
	int i2;
	int flag;

	flag = 1;
	i1 = 0;
	while (s1[i1] != '\0')
		i1++;
	i1--;
	while (&s1[i1] != s1 && flag == 1)
	{
		i2 = 0;
		while (i2 <= (int)ft_strlen(set))
		{
			if (s1[i1] == set[i2++])
			{
				flag = 1;
				*count_end = *count_end + 1;
				break ;
			}
			else
				flag = 0;
		}
		i1--;
	}
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		count_start;
	int		count_end;
	int		summ;
	int		i;
	char	*res;

	if (s1 == NULL || set == NULL)
		return ((char *)s1);
	i = 0;
	count_end = 0;
	count_start = ft_start(s1, set);
	ft_end(s1, set, &count_end);
	if ((int)ft_strlen(s1) < count_start + count_end)
		summ = count_start;
	else
		summ = count_start + count_end;
	res = (char *)malloc(ft_strlen(s1) - summ + 1);
	if (res == 0)
		return (0);
	while (count_start < (int)ft_strlen(s1) - count_end)
		res[i++] = s1[count_start++];
	res[i] = '\0';
	return (res);
}
