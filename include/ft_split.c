/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:08:40 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/24 10:40:26 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word(const char *s, char c, int *big_word)
{
	int res;
	int i;
	int big_word_now;

	big_word_now = 0;
	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (*big_word < big_word_now)
			*big_word = big_word_now;
		big_word_now = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			res++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				big_word_now++;
			}
		}
	}
	return (res);
}

static void		*ft_free(char **splitted, int words)
{
	int		i;

	i = 0;
	while (i < words)
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
	return (NULL);
}

static char		**ft_mall(const char *s, char c, char **res, int big_word)
{
	int i_str;
	int i_res;
	int j_res;

	i_res = 0;
	i_str = 0;
	while (s[i_str] != '\0')
	{
		while (s[i_str] != '\0' && s[i_str] == c)
			i_str++;
		if (s[i_str] != c && s[i_str] != '\0')
		{
			res[i_res] = (char *)malloc(sizeof(char) * big_word + 1);
			if (res[i_res] == NULL)
				return (ft_free(res, i_res));
			j_res = 0;
			while (s[i_str] != c && s[i_str] != '\0')
				res[i_res][j_res++] = s[i_str++];
			res[i_res][j_res] = '\0';
			i_res++;
		}
	}
	res[i_res] = NULL;
	return (res);
}

char			**ft_split(char const *s, char c)
{
	int		big_word;
	int		count_word;
	char	**res;

	if (s == NULL)
		return (NULL);
	count_word = ft_word(s, c, &big_word);
	res = (char **)malloc((count_word + 1) * sizeof(char *));
	if (res == 0)
		return (0);
	return (ft_mall(s, c, res, big_word));
}
