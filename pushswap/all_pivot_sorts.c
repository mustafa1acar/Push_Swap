/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_pivot_sorts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:51:20 by macar             #+#    #+#             */
/*   Updated: 2022/03/06 19:07:32 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pivot_sort_if(t_stacks *st, int pivot)
{
	if ((st->a_st[st->top_a_index] == ft_min_a(st) \
	|| st->a_st[st->top_a_index] < pivot) && st->top_a_index > 0)
		ft_pb(st);
	else if (is_there_lesser(st->a_st, st->top_a_index / 2, pivot) \
	&& is_there_greater(st->b_st, st->top_b_index / 2, pivot) \
	&& st->top_b_index > 0)
	{
		ft_rr(st);
		write(1, "rr\n", 3);
	}
	else if (!is_there_lesser(st->a_st, st->top_a_index / 2, pivot) \
	&& !is_there_greater(st->b_st, st->top_b_index / 2, pivot) \
	&& st->top_b_index > 0)
	{
		ft_rrr(st);
		write(1, "rrr\n", 4);
	}
	else
		a_b_pivot(st, pivot);
}

void	pivot_sort(t_stacks *st)
{
	int	pivot;

	pivot = average(st->a_st, st->top_a_index + 1);
	while (st->top_a_index > 0)
	{
		pivot = average(st->a_st, st->top_a_index + 1);
		pivot_sort_if(st, pivot);
	}
	ft_all_p(st);
}
