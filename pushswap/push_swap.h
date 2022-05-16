/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:28:31 by macar             #+#    #+#             */
/*   Updated: 2022/03/06 17:51:25 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stacks
{
	int			*a_st;
	int			*b_st;
	int			*temp_st;
	int			a_size;
	int			b_size;
	int			total_size;
	int			top_a_index;
	int			top_b_index;
	int			minu;
	int			control;
	int			x;
	int			y;
	long int	temp;

}	t_stacks;

void	ft_geri_kalan(t_stacks *st, int check_num);
void	ft_sa(t_stacks *st);
void	ft_sb(t_stacks *st);
void	ft_ss(t_stacks *st);
void	ft_pa(t_stacks *st);
void	ft_pb(t_stacks *st);
void	ft_ra(t_stacks *st);
void	ft_rb(t_stacks *st);
void	ft_rr(t_stacks *st);
void	ft_rra(t_stacks *st);
void	ft_rrb(t_stacks *st);
void	ft_rrr(t_stacks *st);
int		ft_isdigit(char *n);
int		ft_atoi(char *str, t_stacks *st, int x);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_isdigit2(char *n);
int		ft_atoi2(char *str, t_stacks *st, int contr);
int		ft_selection(t_stacks *st);
int		fill_stack(t_stacks *st);
int		ft_b_selection(t_stacks *st);
int		ft_a_selection(t_stacks *st);
int		ft_min_a(t_stacks *st);
int		ft_max_a(t_stacks *st);
int		ft_max(t_stacks *st);
int		ft_min_a(t_stacks *st);
int		ft_min_a_index(t_stacks *st);
int		ft_max_a(t_stacks *st);
int		ft_max_a_index(t_stacks *st);
int		is_there_zerobit(int *lst, int len, int bitindex);
int		get_bit(int num, int index);
int		get_bit_count(int num);
void	ft_initialize(t_stacks *a);
int		ft_duplicate(t_stacks *st, int len);
int		ft_checker(int ac, char **av, t_stacks *st);
int		ft_min_b(t_stacks *st);
int		ft_min_b_index(t_stacks *st);
int		ft_max_b(t_stacks *st);
int		ft_max_b_index(t_stacks *st);
int		ft_selection_index(t_stacks *st);
void	ft_selection_index_sirali(t_stacks *st);
int		*copy(int *lst, int len);
int		get_index(int *lst, int len, int num);
int		is_there_greater(int *lst, int len, int num);
int		ft_selection(t_stacks *st);
void	ft_selection_index222_operasyon(t_stacks *st);
int		is_there_lesser(int *lst, int len, int num);
int		ft_checker(int ac, char **av, t_stacks *st);
void	ft_three(t_stacks *st);
void	ft_all_p(t_stacks *st);
int		average(int *lst, int len);
void	radix_sort_500(t_stacks *st);
void	a_b_pivot(t_stacks *st, int pivot);
void	a_b_pivot_rb(t_stacks *st);
void	ft_three_else(t_stacks *st);
void	a_b_pivot_ra(t_stacks *st, int pivot);
void	st_temps(t_stacks *st, char i);
void	ft_error(t_stacks *st);
void	pivot_sort(t_stacks *st);
void	pivot_sort_if(t_stacks *st, int pivot);
int		total_kontrol(t_stacks *st, int ac, char **av);
int		total_size(t_stacks *st, int ac, char **av);
int		is_there_space(t_stacks *st, int ac, char **av, int i);
void	lower_seven(t_stacks *st);
#endif
