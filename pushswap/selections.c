/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selections.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:51:15 by macar             #+#    #+#             */
/*   Updated: 2022/03/06 16:31:34 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_b_selection(t_stacks *st)
{
	int	i;
	int	a;

	i = 0;
	if (st->top_b_index > 0)
	{
		while (i <= st->top_b_index)
		{
			a = i + 1;
			while (a <= st->top_b_index)
			{
				if (st->b_st[a] < st->b_st[i])
					return (0);
				a++;
			}
			i++;
		}
	}
	return (1);
}

int	ft_a_selection(t_stacks *st)
{
	int	i;
	int	a;

	i = 0;
	while (i < st->top_a_index + 1)
	{
		a = i + 1;
		while (a < st->top_a_index + 1)
		{
			if (st->a_st[a] > st->a_st[i])
				return (1);
			a++;
		}
		i++;
	}
	return (0);
}

/*
int ft_a_selection(t_stacks *st)
{
    int i;
    int a;
    i = st->top_a_index - 1;
    //   printf("a select\n");
    if (st->top_a_index > 0)
    { 
   while (i >= 0)
    {
        if (st->a_st[i + 1] < st->a_st[i])
            return (0);
        
		   a = i - 1;
        while(a >= st->top_a_index)
        {
            if (st->a_st[a] > st->a_st[i])
                return (0);
            a--;
        } 
        i--;
    }
        } 
    return 1; siraliysa
}*/
