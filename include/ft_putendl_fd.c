/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:56:15 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/23 15:50:30 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char n;

	if (s == NULL)
		return ;
	n = '\n';
	if (*s != '\0')
		write(fd, s, ft_strlen(s));
	write(fd, &n, 1);
}
