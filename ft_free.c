/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:17:02 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/17 19:17:53 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear_2(t_list **lst)
{
	t_list	*tmp;
	t_list	*element;

	element = *lst;
	tmp = NULL;
	if (!lst || !*lst)
		return ;
	while (element)
	{
		if (element->next)
			tmp = element->next;
		else
			tmp = NULL;
		if (element->content != 0)
			element->content = 0;
		if (element->order != 0)
			element->order = 0;
		free(element);
		element = tmp;
	}
	*lst = NULL;
}

void	ft_free(t_list **a, t_list **b, int *c)
{
	ft_lstclear_2(a);
	ft_lstclear_2(b);
	free(c);
	c = NULL;
}
