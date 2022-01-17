/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:00:31 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/19 12:57:19 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_list **a, int i)
{
	t_list	*lst;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	lst = *a;
	*a = lst->next;
	lst->next = NULL;
	ft_lstadd_back(a, lst);
	if (i == 1)
		write(1, "ra\n", 3);
}

void	ft_rb(t_list **b, int i)
{
	t_list	*lst;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	lst = *b;
	*b = lst->next;
	lst->next = NULL;
	ft_lstadd_back(b, lst);
	if (i == 1)
		write(1, "rb\n", 3);
}

void	ft_rr(t_list **a, t_list **b, int i)
{
	ft_ra(a, i);
	ft_rb(b, i);
	if (i == 1)
		write(1, "rr\n", 3);
}
