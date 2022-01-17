/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstorder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 10:23:57 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/18 17:58:35 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstorder(t_list **a, int *c)
{
	int		i;
	t_list	*lst;

	lst = *a;
	while (lst)
	{
		i = 0;
		while (lst->content != c[i])
			i++;
		lst->order = i;
		lst = lst->next;
	}
}
