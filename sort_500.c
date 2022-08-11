/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:15:44 by omar              #+#    #+#             */
/*   Updated: 2022/08/11 13:49:26 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ag_push_to_stack_b_500(t_data *data)
{
	int	range;
	int	count;
	int	j;
	int	range2;
	// int	temp;

	range = data->size_array / 11;
	range2 = range;
	count = data->size_array;
	while (range <= data->size_array)
	{
		j = data->top_a;
		ag_find_number_in_the_range(data,&count,&j,&range);
		range += range2;
	}
	while (count)
	{
		pb(data);
		count--;
	}
}

void	sort_five_hunder(t_data *data)
{
	int		arr_order;
	int		index;
	bool	a;

	ag_push_to_stack_b_500(data);
	a = true;
	arr_order = data->size_array - 1;
	while (a)
	{
		index = get_bigest_index(data);
		while (data->stack_a[data->top_b] != data->order_array[arr_order])
		{
			if (index >= data->top_b / 2)
				rb(data);
			else
				rrb(data);
		}
		if (data->top_b >= 0)
		{
			pa(data);
			arr_order--;
		}
		if (data->top_b == -1 && arr_order == -1)
			a = false;
	}
}
