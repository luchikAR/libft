/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:27:00 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/23 15:49:52 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int		check_minus(char *str11)
{
	if (*str11 == '-')
		return (1);
	else
		return (0);
}

static void		f_int_str(char *str1, char *str2, \
		int *flag_chislo, int *int_str)
{
	*int_str = (*int_str * 10 + *str1) - '0';
	if (*str2 < '0' || *str2 > '9')
		*flag_chislo = -1;
}

static int		check_end(char *str1, char *str2)
{
	if ((*str1 == ' ' || *str1 == '\n'
		|| *str1 == '\t' || *str1 == '\v'
		|| *str1 == '\f' || *str1 == '\r')
		&& (*str2 == '-' || *str2 <= '+'
		|| *str2 == ' ' || *str2 == '\n'
		|| *str2 == '\t' || *str2 == '\v'
		|| *str2 == '\f' || *str2 == '\r'
		|| (*str2 >= '0' && *str2 <= '9')))
		return (1);
	else if ((*str1 == '+' || *str1 == '-')
			&& (*str2 >= '0' && *str2 <= '9'))
		return (1);
	else if (*str1 >= '0' && *str1 <= '9')
		return (1);
	else
		return (0);
}

int				ft_atoi(char *str)
{
	int i;
	int count_minus;
	int int_str;
	int flag_chislo;

	i = 0;
	count_minus = 0;
	int_str = 0;
	flag_chislo = 1;
	while (str[i] != '\0')
	{
		if (check_end(&str[i], &str[i + 1]) == 0)
			return (0);
		if (flag_chislo != -1)
			count_minus += check_minus(&str[i]);
		if (flag_chislo != -1 && str[i] >= '0' && str[i] <= '9')
			f_int_str(&str[i], &str[i + 1], &flag_chislo, &int_str);
		if (flag_chislo == -1 && (count_minus % 2 == 0))
			return (int_str);
		if (flag_chislo == -1 && (count_minus % 2 == 1))
			return (-int_str);
		i++;
	}
	return (0);
}
