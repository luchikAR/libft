/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:04:14 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/10 15:46:41 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char *s_now;

	s_now = (char*)s;
	while ((int)*s_now != c && *s_now != '\0')
		(void)*s_now++;
	if ((int)*s_now == c)
		return (s_now);
	else
		return (0);
}
