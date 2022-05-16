/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:53:44 by macar             #+#    #+#             */
/*   Updated: 2022/03/06 19:17:56 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//34 -1 0 98 14 54 -9
//4   1 2  6  3  5  0
//0 1 2 3 4 5 6
//-9 -1 0

void	top_a_one(t_stacks *st)
{
	if (st->a_st[st->top_a_index] > st->a_st[st->top_a_index - 1])
	{
		ft_sa(st);
		write(1, "sa\n", 3);
	}
}

void	lower_seven(t_stacks *st)
{
	int	pivot;

	pivot = average(st->a_st, st->top_a_index + 1);
	while (st->top_a_index > 2)
		pivot_sort_if(st, pivot);
}

void	start_stack(t_stacks *st)
{
	if (st->top_a_index > 400)
		radix_sort_500(st);
	else if (st->top_a_index == 1)
		top_a_one(st);
	else if (st->top_a_index <= 400 && st->top_a_index > 4)
		pivot_sort(st);
	else if (st->top_a_index >= 3)
	{
		lower_seven(st);
		if (ft_a_selection(st))
			ft_three(st);
		ft_all_p(st);
	}
	else
		ft_three(st);
}

int	fill_stack(t_stacks *st)
{
	int	i;
	int	k;

	i = 0;
	st->a_st = malloc(sizeof(int) * st->total_size);
	st->b_st = malloc(sizeof(int) * st->total_size);
	if (st->a_st == NULL || st->b_st == NULL)
		return (0);
	st->top_a_index = st->total_size - 1;
	k = st->top_a_index;
	while (i < st->total_size)
	{
		st->a_st[i] = st->temp_st[k];
		i++;
		k--;
	}
	start_stack(st);
	free(st->a_st);
	free(st->b_st);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	st;

	if (argc == 1)
		return (0);
	if (!ft_checker(argc, argv, &st))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (!ft_selection(&st))
		return (0);
	else
		fill_stack(&st);
	return (0);
}
//siraliysa en bastan errro yazma
