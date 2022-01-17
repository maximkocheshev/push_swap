/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:18:10 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/19 13:06:26 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit (EXIT_FAILURE);
}

int	ft_check_order(t_list **a, int *c, int size)
{
	t_list	*lst;
	int		i;

	lst = *a;
	i = 0;
	while (i < size)
	{
		if (lst->content != c[i])
			return (0);
		i++;
		lst = lst->next;
	}
	return (1);
}

void	ft_check_repeat_error(int *c, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (c[i] == c[j] && i != j)
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_check_digit_error(char **argv, int i)
{
	int		j;

	j = 0;
	if (argv[i][0] == '-')
	{
		j++;
		if (argv[i][1] == '\0')
			ft_error();
	}
	while (argv[i][j] != '\0')
	{
		if (ft_isdigit(argv[i][j]) == 0)
			ft_error();
		j++;
	}
}
