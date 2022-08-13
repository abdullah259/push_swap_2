/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:10 by omar              #+#    #+#             */
/*   Updated: 2022/08/13 00:50:40 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_data {
	int		size_array;
	int		*stack_a;
	int		*order_array;
	int		top_a;
	int		top_b;
	char	*join;
	char	**sp;
}	t_data;

char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	check_dub(int *num, t_data *data);
char	*ft_join_arg(char **argv);
int		ft_atoi(char *str, t_data *data);
char	*ft_strdup(const char *s1);
void	*arr_int(char **sp, t_data *data);
void	sa(t_data *data);
int		*ra(t_data *data);
int		*rra(t_data *data);
int		*rb(t_data *data);
int		*rrb(t_data *data);
void	pb(t_data *data);
void	pa(t_data *data);
void	sort_three(t_data *data);
void	sort_three4(t_data *data);
void	sort_four(t_data *data);
void	order_array(int *array, t_data *data);
void	sort_hundred(t_data *data);
void	sb(t_data *data);
void	sort_five_hunder(t_data *data);
int		get_bigest_index(t_data *data);
void	ag_push_to_stack_b_500(t_data *data);
void	check_is_all_push(t_data *data, int *count);
int		is_sorted(t_data *data);
void	push_tp_stack_b_100(t_data *data);
void	ag_exit(void);
void	ag_find_number_in_the_range(t_data *data, int *count,
			int *j, int *range);
void	check_valid(char **argv);
void	ag_free(t_data *data);
#endif