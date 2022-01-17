/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:04:01 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/19 13:35:56 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_oper(t_list **a, t_list **b, char *oper)
{
	if (!ft_strcmp(oper, "sa"))
		ft_sa(*a, 0);
	else if (!ft_strcmp(oper, "sb"))
		ft_sb(*b, 0);
	else if (!ft_strcmp(oper, "ss"))
		ft_ss(*a, *b, 0);
	else if (!ft_strcmp(oper, "ra"))
		ft_ra(a, 0);
	else if (!ft_strcmp(oper, "rb"))
		ft_rb(b, 0);
	else if (!ft_strcmp(oper, "rr"))
		ft_rr(a, b, 0);
	else if (!ft_strcmp(oper, "rra"))
		ft_rra(a, 0);
	else if (!ft_strcmp(oper, "rrb"))
		ft_rrb(b, 0);
	else if (!ft_strcmp(oper, "rrr"))
		ft_rrr(a, b, 0);
	else if (!ft_strcmp(oper, "pa"))
		ft_pa(a, b, 0);
	else if (!ft_strcmp(oper, "pb"))
		ft_pb(a, b, 0);
	else
		ft_error();
}

void	ft_do_sort(t_list **a, t_list **b, int *c, int size)
{
	char	*oper;

	if (a && c)
	{
		while (get_next_line(&oper) > 0)
		{
			ft_do_oper(a, b, oper);
			free(oper);
		}
		free(oper);
		if (ft_check_order(a, c, size - 1) && !*b)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
}

void	ft_check_and_sort(t_list **a, t_list **b, int *c, int size)
{
	ft_check_repeat_error(c, size);
	quicksort(c, 0, size - 1);
	ft_lstorder(a, c);
	ft_do_sort(a, b, c, size);
}

void	ft_init(int argc, char **argv, int i, int len)
{
	t_list	*a;
	t_list	*b;
	t_list	*new;
	int		*c;
	int		j;

	a = NULL;
	b = NULL;
	if (len != 0)
		c = malloc(sizeof(int) * (argc));
	else
		c = malloc(sizeof(int) * (argc - 1));
	if (c == NULL)
		exit (1);
	j = -1;
	while (i < argc)
	{
		ft_check_digit_error(argv, i);
		c[++j] = ft_atoi(argv[i]);
		new = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(&a, new);
		i++;
	}
	ft_check_and_sort(&a, &b, c, ft_lstsize(a));
	ft_free(&a, &b, c);
}

int	main(int argc, char **argv)
{
	int		len;
	int		i;

	if (argc < 2)
		return (0);
	i = 1;
	len = 0;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		while (argv[len] != '\0')
			len++;
		argc = len;
		i = 0;
	}
	ft_init(argc, argv, i, len);
	return (0);
}
