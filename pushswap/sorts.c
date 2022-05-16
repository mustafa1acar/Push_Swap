/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:44:51 by macar             #+#    #+#             */
/*   Updated: 2022/03/06 16:28:02 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three_else(t_stacks *st)
{
	if (st->a_st[st->top_a_index] > st->a_st[st->top_a_index - 1] \
	&& st->a_st[0] == ft_max_a(st))
	{
		ft_sa(st);
		write(1, "sa\n", 3);
	}
	else if (st->a_st[1] == ft_max_a(st))
	{
		ft_rra(st);
		write(1, "rra\n", 4);
		if (st->a_st[st->top_a_index] > st->a_st[st->top_a_index - 1])
		{
			ft_sa(st);
			write(1, "sa\n", 3);
		}
	}
}

void	ft_three(t_stacks *stack)
{
	if (stack->a_st[1] > stack->a_st[0] && stack->a_st[1] > stack->a_st[2])
	{
		ft_rra(stack);
		write(1, "rra\n", 4);
		if (stack->a_st[1] < stack->a_st[2])
		{
			ft_sa(stack);
			write(1, "sa\n", 3);
		}
	}
	else if (stack->a_st[2] > stack->a_st[1] && stack->a_st[2] > stack->a_st[0])
	{
		ft_ra(stack);
		write(1, "ra\n", 3);
		if (stack->a_st[1] < stack->a_st[2])
		{
			ft_sa(stack);
			write(1, "sa\n", 3);
		}
	}
	else if (stack->a_st[0] > stack->a_st[1] && stack->a_st[0] > stack->a_st[2])
	{
		ft_sa(stack);
		write(1, "sa\n", 3);
	}
}

int	average(int *lst, int len)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (i < len)
		ret += lst[i++];
	return (ret / len);
}

void	ft_all_p(t_stacks *st)
{
	while (st->top_b_index != -1)
	{
		if (st->b_st[st->top_b_index] == ft_max_b(st))
			ft_pa(st);
		else
		{
			while (st->b_st[st->top_b_index] != ft_max_b(st) \
			&& st->top_b_index > 0)
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
		}
	}
}

void	radix_sort_500(t_stacks *st)
{
	int	k;
	int	bitlen;
	int	uzunluk;

	k = 0;
	ft_selection_index222_operasyon(st);
	bitlen = get_bit_count(ft_max_a(st));
	while (bitlen > 0)
	{
		uzunluk = st->top_a_index + 1;
		while (uzunluk--)
		{
			if (get_bit(st->a_st[st->top_a_index], k))
				ft_pb(st);
			else
			{
				ft_ra(st);
				write(1, "ra\n", 3);
			}
		}
		while (st->top_b_index != -1)
			ft_pa(st);
		bitlen--;
		k++;
	}
}
