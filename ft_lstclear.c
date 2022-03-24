/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:37:34 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/24 12:34:33 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *n1;
	t_list *n2;

	if (!(*lst))
		return ;
	n1 = *lst;
	while (n1 != NULL)
	{
		n2 = n1;
		n1 = n1->next;
		del(n2->content);
		free(n2);
	}
	*lst = NULL;
}
