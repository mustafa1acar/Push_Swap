/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_and_rotates2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:29:43 by macar             #+#    #+#             */
/*   Updated: 2022/03/04 12:06:05 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_stacks *st)
{
	int	temp;

	if (st->top_b_index != 0 && st->top_b_index != -1)
	{
		temp = st->b_st[st->top_b_index];
		st->b_st[st->top_b_index] = st->b_st[st->top_b_index - 1];
		st->b_st[st->top_b_index - 1] = temp;
	}
}

void	ft_ss(t_stacks *st)
{
	ft_sa(st);
	ft_sb(st);
}

void	ft_pa(t_stacks *st)
{
	if (st->top_b_index != -1)
	{
		st->top_a_index++;
		st->a_st[st->top_a_index] = st->b_st[st->top_b_index];
		st->top_b_index--;
		write(1, "pa\n", 3);
	}
}

void	ft_pb(t_stacks *st)
{
	if (st->top_a_index != 0)
	{
		st->top_b_index++;
		st->b_st[st->top_b_index] = st->a_st[st->top_a_index];
		st->top_a_index--;
		write(1, "pb\n", 3);
	}
}

void	ft_ra(t_stacks *st)
{
	int	temp;
	int	i;

	i = st->top_a_index;
	while (i != 0)
	{
		temp = st->a_st[i];
		st->a_st[i] = st->a_st[i - 1];
		st->a_st[i - 1] = temp;
		i--;
	}
}
