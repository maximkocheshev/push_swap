/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:13:51 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/19 12:56:32 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_big_stack(t_list **a, t_list **b, int size)
{
	int	i;
	int	j;
	int	num;
	int	max_num;
	int	max_bits;

	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			num = (*a)->order;
			if (((num >> i) & 1) == 1)
				ft_ra(a, 1);
			else
				ft_pb(a, b, 1);
		}
		while (*b)
			ft_pa(a, b, 1);
	}
}
