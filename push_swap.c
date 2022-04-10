/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:47:29 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/19 15:36:37 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_and_sort(t_list **a, t_list **b, int *c, int size)
{
	ft_check_repeat_error(c, size);
	quicksort(c, 0, size - 1);
	if (ft_check_order(a, c, size - 1))
		exit (EXIT_SUCCESS);
	ft_lstorder(a, c);
	if (size <= 5)
		sort_small_stack(a, b, c, size);
	else
		sort_big_stack(a, b, size);
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
        if (argv == NULL)
            return (1);
		while (argv[len] != '\0')
			len++;
		argc = len;
		i = 0;
	}
	ft_init(argc, argv, i, len);
	return (0);
}
