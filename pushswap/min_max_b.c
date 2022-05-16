/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:33:33 by macar             #+#    #+#             */
/*   Updated: 2022/03/02 20:34:18 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_b(t_stacks *st)
{
	int	i;
	int	min;

	i = 1;
	min = st->b_st[0];
	if (st->top_b_index != 0)
	{
		while (i <= st->top_b_index)
		{
			if (st->b_st[i] < min)
				min = st->b_st[i];
			i++;
		}
	}
	return (min);
}

int	ft_min_b_index(t_stacks *st)
{
	int	i;
	int	min;

	i = 1;
	min = ft_min_b(st);
	if (st->top_b_index != 0)
	{
		while (i <= st->top_b_index)
		{
			if (st->b_st[i] == min)
				return (i);
			i++;
		}
	}
	return (-1);
}

int	ft_max_b(t_stacks *st)
{
	int	i;
	int	max;

	i = 1;
	max = st->b_st[0];
	while (i <= st->top_b_index)
	{
		if (st->b_st[i] > max)
			max = st->b_st[i];
		i++;
	}
	return (max);
}
//**********

int	ft_max_b_index(t_stacks *st)
{
	int	i;
	int	max;

	i = 1;
	max = ft_max_b(st);
	while (i <= st->top_b_index)
	{
		if (st->b_st[i] == max)
			return (i);
		i++;
	}
	return (-1);
}
