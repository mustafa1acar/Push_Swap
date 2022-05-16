/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_and_rotates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:41:50 by macar             #+#    #+#             */
/*   Updated: 2022/03/01 19:49:47 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stacks *st)
{
	int	temp;
	int	i;

	i = st->top_b_index;
	while (i != 0)
	{
		temp = st->b_st[i];
		st->b_st[i] = st->b_st[i - 1];
		st->b_st[i - 1] = temp;
		i--;
	}
}

void	ft_rr(t_stacks *st)
{
	ft_ra(st);
	ft_rb(st);
}

void	ft_rra(t_stacks *st)
{
	int	i;
	int	a;
	int	temp;

	i = st->top_a_index;
	a = 0;
	while (a != st->top_a_index)
	{
		temp = st->a_st[a];
		st->a_st[a] = st->a_st[a + 1];
		st->a_st[a + 1] = temp;
		a++;
	}
}

void	ft_rrb(t_stacks *st)
{
	int	i;
	int	a;
	int	temp;

	i = st->top_b_index;
	a = 0;
	while (a != st->top_b_index)
	{
		temp = st->b_st[a];
		st->b_st[a] = st->b_st[a + 1];
		st->b_st[a + 1] = temp;
	a++;
	}
}

void	ft_rrr(t_stacks *st)
{
	ft_rra(st);
	ft_rrb(st);
}
