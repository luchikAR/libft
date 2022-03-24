/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:21:19 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/23 11:23:03 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *s_now;
	char *res;

	s_now = (char*)s;
	res = 0;
	while (*s_now != '\0')
	{
		if ((int)*s_now == c)
			res = s_now;
		(void)*s_now++;
	}
	if (res == 0 && c == '\0')
		return (s_now);
	if (res != 0)
		return (res);
	else
		return (0);
}
