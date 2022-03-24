/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:57:16 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/24 08:59:15 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_flag(int n, int *n2, int *flag)
{
	if (n >= 0)
	{
		*flag = 1;
		*n2 = n;
	}
	else
	{
		*flag = 0;
		*n2 = -1 * n;
	}
}

static int		ft_paw(int n1)
{
	int res;

	res = 1;
	while (n1-- > 0)
		res *= 10;
	return (res);
}

static char		*ft_min(int n)
{
	char	*res;
	char	*str;
	int		i;

	(void)n;
	i = 0;
	str = "-2147483648";
	res = (char *)malloc(sizeof(char) * 12);
	while (i <= 12)
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

char			*ft_itoa(int n)
{
	int		n2;
	int		flag;
	int		size_res;
	int		i;
	char	*res;

	size_res = 0;
	i = 0;
	if (n == -2147483648)
		return (ft_min(0));
	ft_flag(n, &n2, &flag);
	while (n2 > 9)
	{
		n2 = n2 / 10;
		size_res++;
	}
	res = (char *)malloc(sizeof(char) * (size_res + 2));
	if (res == NULL)
		return (NULL);
	ft_flag(n, &n2, &flag);
	flag == 0 ? res[i++] = '-' : (void)n;
	while (size_res >= 0)
		res[i++] = ((n2 / ft_paw(size_res--)) % 10) + '0';
	res[i] = '\0';
	return (res);
}
