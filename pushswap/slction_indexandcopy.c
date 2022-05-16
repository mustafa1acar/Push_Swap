/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slction_indexandcopy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:38:22 by macar             #+#    #+#             */
/*   Updated: 2022/03/04 12:30:09 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_selection_index(t_stacks *st)
{
	int	i;
	int	temp;
	int	a;

	i = 0;
	while (i < st->total_size)
	{
		a = i + 1;
		while (a < st->total_size)
		{
			if (st->temp_st[i] > st->temp_st[a])
			{
				temp = st->temp_st[i];
				st->temp_st[i] = st->temp_st[a];
				st->temp_st[a] = temp;
			}
			a++;
		}
		i++;
	}
	return (st->temp_st[i / 2]);
}

void	ft_selection_index_sirali(t_stacks *st)
{
	int	i;
	int	temp;
	int	a;

	i = 0;
	while (i < st->total_size)
	{
		a = i + 1;
		while (a < st->total_size)
		{
			if (st->temp_st[i] < st->temp_st[a])
			{
				temp = st->temp_st[i];
				st->temp_st[i] = st->temp_st[a];
				st->temp_st[a] = temp;
			}
			a++;
		}
		i++;
	}
}

int	*copy(int *lst, int len)
{
	int	i;
	int	*ret;

	i = 0;
	ret = malloc(sizeof(int) * len);
	if (!ret)
		return (NULL);
	while (i < len)
	{
		ret[i] = lst[i];
		i++;
	}
	return (ret);
}

int	get_index(int *lst, int len, int num)
{
	int	i;

	i = 0;
	while (i < len)
		if (lst[i++] == num)
			return (i - 1);
	return (-1);
}
