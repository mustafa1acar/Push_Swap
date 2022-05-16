/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:34:40 by macar             #+#    #+#             */
/*   Updated: 2022/03/06 13:50:01 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_stacks *st)
{
	write(1, "Error\n", 6);
	free(st->temp_st);
	exit(1);
}

int	ft_atoi(char *str, t_stacks *st, int x)
{
	int			i;
	int			minu;
	long int	temp;

	(void)x;
	i = 0;
	temp = 0;
	minu = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minu *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = temp * 10 + (str[i] - 48);
		i++;
		if (temp * minu > 2147483647 || temp * minu < -2147483648)
			ft_error(st);
	}
	st->temp_st[st->y++] = ((int)minu * temp);
	return (0);
}

int	ft_atoi2_resume(char *str, t_stacks *st, int contr, int i)
{
	if (contr == 0)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			st->x++;
		}
	}
	return (st->x);
}

int	ft_minus_plus(char *str, t_stacks *st, int i)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			st->minu *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi2(char *str, t_stacks *st, int contr)
{
	int			i;
	int			isin;

	i = 0;
	while (str[i])
	{	
		isin = 0;
		st->temp = 0;
		st->minu = 1;
		while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
		i = ft_minus_plus(str, st, i);
		while (str[i] >= '0' && str[i] <= '9')
		{
			isin++;
			st_temps(st, str[i]);
			i++;
			if (contr == 0)
				ft_atoi2_resume(str, st, contr, i);
		}
		if (contr != 0 && isin != 0)
			st->temp_st[st->y++] = ((int)st->minu * st->temp);
	}
	return (0);
}

/* int main()
{
	printf("%d\n", ft_atoi("-2147483649"));
	printf("%d\n", atoi("-2147483649"));
} */