/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_size_kontrol.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:46:52 by macar             #+#    #+#             */
/*   Updated: 2022/03/06 13:47:29 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	total_size(t_stacks *st, int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (is_there_space(st, ac, av, i))
			ft_atoi2(av[i], st, st->control);
		else
			st->x++;
		i++;
	}
	st->control++;
	return (st->x);
}

int	total_kontrol(t_stacks *st, int ac, char **av)
{
	int	i;

	(void) st;
	i = 1;
	while (i < ac)
	{
		if (!ft_isdigit2(av[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_sa(t_stacks *st)
{
	int	temp;

	if (st->top_a_index != 0)
	{
		temp = st->a_st[st->top_a_index];
		st->a_st[st->top_a_index] = st->a_st[st->top_a_index - 1];
		st->a_st[st->top_a_index - 1] = temp;
	}
}
