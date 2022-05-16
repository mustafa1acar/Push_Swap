/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:25:26 by macar             #+#    #+#             */
/*   Updated: 2022/03/04 15:21:14 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *n)
{
	int	i;

	i = 0;
	while (n[i])
	{
		if (!((n[i] >= 48 && n[i] <= 57) || n[i] == '-'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isdigit2(char *n)
{
	int	i;

	i = 0;
	while (n[i])
	{
		if (!((n[i] >= 48 && n[i] <= 57) \
		|| n[i] == ' ' || n[i] == '\t' || n[i] == '-'))
			return (0);
		i++;
	}
	return (1);
}
