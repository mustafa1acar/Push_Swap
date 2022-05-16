/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minandmaxes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:22:54 by macar             #+#    #+#             */
/*   Updated: 2022/03/02 17:08:37 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(t_stacks *st)
{
	int	i;
	int	a;
	int	max;

	i = 0;
	max = 0;
	if (st->top_b_index != 0 && st->top_b_index != -1)
	{
		while (i <= st->top_b_index)
		{
			a = 0;
			while (a <= st->top_b_index)
			{
				if (st->b_st[i] > st->b_st[a])
				max = st->b_st[i];
				a++;
			}
		i++;
		}
	}
	return (max);
}

int	ft_min_a(t_stacks *st)
{
	int	i;
	int	min;

	i = 1;
	min = st->a_st[0];
	if (st->top_a_index != 0)
	{
		while (i <= st->top_a_index)
		{
			if (st->a_st[i] < min)
			min = st->a_st[i];
			i++;
		}
	}
	return (min);
}

int	ft_min_a_index(t_stacks *st)
{
	int	i;
	int	min;

	i = 1;
	min = ft_min_a(st);
	if (st->top_a_index != 0)
	{
		while (i <= st->top_a_index)
		{
			if (st->a_st[i] == min)
				return (i);
				i++;
		}
	}
	return (-1);
}

int	ft_max_a(t_stacks *st)
{
	int	i;
	int	max;

	i = 1;
	max = st->a_st[0];
	if (st->top_a_index != 0)
	{
		while (i <= st->top_a_index)
		{
			if (st->a_st[i] > max)
			max = st->a_st[i];
				i++;
		}
	}
	return (max);
}

int	ft_max_a_index(t_stacks *st)
{
	int	i;
	int	max;

	i = 1;
	max = ft_max_a(st);
	if (st->top_a_index != 0)
	{
		while (i <= st->top_a_index)
		{
			if (st->a_st[i] == max)
				return (i);
				i++;
		}
	}
	return (-1);
}
