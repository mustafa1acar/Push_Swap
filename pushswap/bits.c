/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:17:20 by macar             #+#    #+#             */
/*   Updated: 2022/03/02 16:19:12 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_bit(int num, int index)
{
	return ((num >> index) & 1);
}

int	is_there_zerobit(int *lst, int len, int bitindex)
{
	while (len > 0)
	{
		if (get_bit(lst[len], bitindex))
			return (1);
		len--;
	}
	return (0);
}

int	get_bit_count(int num)
{
	int	ret;

	ret = 0;
	while (num != 0)
	{
		num >>= 1;
		ret++;
	}
	return (ret);
}
