/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_b_pivots.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:54:22 by macar             #+#    #+#             */
/*   Updated: 2022/03/06 13:40:26 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_b_pivot_ra(t_stacks *st, int pivot)
{
	if (ft_min_a_index(st) < (st->top_a_index / 2) \
	|| is_there_lesser(st->a_st, st->top_a_index / 2, pivot))
	{
		ft_rra(st);
		write(1, "rra\n", 4);
	}
	else
	{
		ft_ra(st);
		write(1, "ra\n", 3);
	}
}

void	a_b_pivot_rb(t_stacks *st)
{
	if (ft_max_b_index(st) < (st->top_b_index / 2))
	{
		ft_rrb(st);
		write(1, "rrb\n", 4);
	}
	else
	{
		ft_rb(st);
		write(1, "rb\n", 3);
	}
}

void	a_b_pivot(t_stacks *st, int pivot)
{
	if (st->a_st[st->top_a_index] != ft_min_a(st) \
	|| st->a_st[st->top_a_index] > pivot)
	{
		a_b_pivot_ra(st, pivot);
	}
	if (st->b_st[st->top_b_index] != ft_max_b(st) && st->top_b_index > 0)
		a_b_pivot_rb(st);
}

void	st_temps(t_stacks *st, char i)
{
	st->temp = st->temp * 10 + (i - 48);
	if (st->temp * st->minu > 2147483647
		|| st->temp * st->minu < -2147483648)
		ft_error(st);
}
