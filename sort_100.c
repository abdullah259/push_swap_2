/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:14:45 by omar              #+#    #+#             */
/*   Updated: 2022/08/09 01:24:29 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_bigest_index(t_data *data)
{
	int	b;
	int	bigest;
	int	index;

	b = 0;
	bigest = data->stack_a[data->top_b];
	index = 0;
	while (b < data->top_b)
	{
		if (bigest < data->stack_a[b])
		{
			bigest = data->stack_a[b];
			index = b;
		}
		b++;
	}
	return (index);
}

void	ag_find_number_in_the_range(t_data *data, int *count, int *j, int *range)
{
	int temp;

	if (data->stack_a[*j] <= data->order_array[*range])
	{
		temp = data->stack_a[*j];
		while (temp != data->stack_a[data->top_a])
		{
			if (*j <= data->size_array / 2)
				ra(data);
			else
				rra(data);
		}
		pb(data);
		(*count)--;
	}
}

void	push_to_stack_b_100(t_data *data)
{
	int	range;
	int	count;
	int	j;
	int	range2;

	range = data->size_array / 6;
	j = 0;
	range2 = range;
	count = data->size_array;
	while (range <= data->size_array)
	{
		j = data->top_a;
		while (j < data->size_array)
		{
			ag_find_number_in_the_range(data,&count,&j,&range);
			j++;
		}
		range += range2;
	}
	while (count)
	{
		pb(data);
		count--;
	}
}

void	sort_hundred(t_data *data)
{
	int		arr_order;
	int		index;
	bool	a;

	push_to_stack_b_100(data);
	a = true;
	arr_order = data->size_array - 1;
	while (a)
	{
		index = get_bigest_index(data);
		while (data->stack_a[data->top_b] != data->order_array[arr_order])
		{
			if (index >= data->size_array / 2)
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
