/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:09:34 by rbiodies          #+#    #+#             */
/*   Updated: 2021/11/19 13:12:41 by rbiodies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_next_line(char **line)
{
	int		ret;
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)malloc(5);
	if (!(buf) || !(line))
		return (-1);
	ret = read(0, &buf[i], 1);
	while (ret > 0 && buf[i] != '\n' && buf[i] != '\0')
	{
		i++;
		ret = read(0, &buf[i], 1);
	}
	buf[i] = '\0';
	if (ret != -1)
		*line = buf;
	if (ret > 0)
		return (1);
	else
		return (ret);
}
