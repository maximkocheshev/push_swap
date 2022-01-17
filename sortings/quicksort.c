/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:41:44 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/15 12:42:53 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	partition(int *c, int start, int end)
{
	int	i;
	int	j;
	int	pivot;

	pivot = c[end];
	i = (start - 1);
	j = start;
	while (j <= end - 1)
	{
		if (c[j] <= pivot)
		{
			i++;
			swap(&c[i], &c[j]);
		}
		j++;
	}
	swap(&c[i + 1], &c[end]);
	return (i + 1);
}

void	quicksort(int *c, int start, int end)
{
	int	j;

	if (start < end)
	{
		j = partition(c, start, end);
		quicksort(c, start, j - 1);
		quicksort(c, j + 1, end);
	}
}
