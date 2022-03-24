/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenonat <gvenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:44:51 by gvenonat          #+#    #+#             */
/*   Updated: 2020/11/24 12:59:11 by gvenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*result;

	if (!(lst))
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (new_list == NULL)
		return (NULL);
	result = new_list;
	while (lst != NULL)
	{
		if (lst->next != NULL)
		{
			if (!(new_list->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&result, del);
				return (0);
			}
			new_list = new_list->next;
		}
		lst = lst->next;
	}
	new_list->next = NULL;
	return (result);
}
