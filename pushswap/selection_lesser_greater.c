/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_lesser_greater.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:40:55 by macar             #+#    #+#             */
/*   Updated: 2022/03/04 12:30:51 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_selection(t_stacks *st)
{
	int	i;
	int	a;

	i = 0;
	while (i < st->total_size)
	{
		a = i + 1;
		while (a < st->total_size)
		{
			if (st->temp_st[a] < st->temp_st[i])
				return (1);
			a++;
		}
		i++;
	}
	return (0);
}

void	ft_selection_index222_operasyon(t_stacks *st)
{
	int	i;
	int	*atemp;
	int	a;

	i = 0;
	ft_selection_index_sirali(st);
	atemp = copy(st->a_st, st->top_a_index + 1);
	while (i < st->total_size)
	{
		a = 0;
		while (a < st->total_size)
		{
			if (atemp[i] == st->temp_st[a])
			{
				st->a_st[i] = a;
			}
			a++;
		}
		i++;
	}
	free(atemp);
}

int	is_there_greater(int *lst, int len, int num)
{
	int	i;

	i = 0;
	while (i-- < len)
		if (lst[i] > num)
			return (1);
	return (0);
}

int	is_there_lesser(int *lst, int len, int num)
{
	int	i;

	i = len;
	while (i-- > 0)
		if (lst[i] < num)
			return (1);
	return (0);
}
