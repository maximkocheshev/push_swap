/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:59:13 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/19 12:58:33 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_list *a, int i)
{
	int	tmp;
	int	tmp2;

	if (a == NULL || a->next == NULL)
		return ;
	tmp = a->content;
	tmp2 = a->order;
	a->content = a->next->content;
	a->order = a->next->order;
	a->next->content = tmp;
	a->next->order = tmp2;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	ft_sb(t_list *b, int i)
{
	int	tmp;

	if (b == NULL || b->next == NULL)
		return ;
	tmp = b->content;
	b->content = b->next->content;
	b->next->content = tmp;
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ft_ss(t_list *a, t_list *b, int i)
{
	ft_sa(a, i);
	ft_sb(b, i);
	if (i == 1)
		write(1, "ss\n", 3);
}
