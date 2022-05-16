/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializeandchecker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:20:33 by macar             #+#    #+#             */
/*   Updated: 2022/03/06 13:47:20 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initialize(t_stacks *a)
{
	a->a_size = 0;
	a->b_size = 0;
	a->total_size = 0;
	a->top_b_index = -1;
	a->top_a_index = 0;
	a->x = 0;
	a->minu = 1;
	a->y = 0;
	a->control = 0;
}

int	ft_duplicate(t_stacks *st, int len)
{
	int	i;
	int	a;

	i = 0;
	while (i < len)
	{
		a = i + 1;
		while (a < len)
		{
			if (st->temp_st[i] == st->temp_st[a])
				return (0);
			a++;
		}
		i++;
	}
	return (1);
}

int	is_there_space(t_stacks *st, int ac, char **av, int i)
{
	int	a;

	a = 0;
	(void)st;
	(void)ac;
	while (av[i][a])
	{
		if (av[i][a] == ' ' || av[i][a] == '\t' || av[i][a] == '\n')
			return (1);
		a++;
	}
	return (0);
}

/*  void ft_yazdir(t_stacks *st)
{
	int i;
	i = 0;
	while(i < st->total_size)
	{
		printf("sayi: %d", st->temp_st[i]);
		i++;
	}
}  */

int	ft_ac_av(int i, int ac, t_stacks *st, char **av)
{
	while (i < ac)
	{
		if (is_there_space(st, ac, av, i))
		{
			if (ft_atoi2(av[i], st, st->control) && !ft_isdigit2(av[i]))
				return (0);
		}
		else
		{
			if (ft_atoi(av[i], st, st->x) || !ft_isdigit(av[i]))
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_checker(int ac, char **av, t_stacks *st)
{
	int	i;

	i = 1;
	ft_initialize(st);
	if (!total_kontrol(st, ac, av))
		return (0);
	st->total_size = total_size(st, ac, av);
	st->temp_st = malloc(sizeof(int) * st->total_size);
	while (i < ac)
	{
		if (!ft_ac_av(i, ac, st, av))
			return (0);
		i++;
	}
	if (!ft_duplicate(st, st->total_size))
		return (0);
	return (1);
}
/* 	if (ac > 2)
	{
		st->total_size = ac - 1;
		st->temp_st = malloc(sizeof(int) * st->total_size);
		if (!ft_ac_av(i, ac, st, av))
			return (0);
	}
	else
	{
		i = 1;
		st->total_size = ft_atoi2(av[1], st, st->control);
		if (st->total_size == 1)
			exit(1);
		st->control++;
		st->temp_st = malloc(sizeof(int) * st->total_size);
		if (!ft_ac_av(i, ac, st, av))
			return (0);
	} */