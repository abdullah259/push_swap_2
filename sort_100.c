/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghazi <aghazi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:14:45 by omar              #+#    #+#             */
/*   Updated: 2022/08/13 23:09:34 by aghazi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	search_down(t_data *data, int *j, int *count, int *dec)
{
	int	temp;

	temp = data->stack_a[*dec];
	while (temp != data->stack_a[data->top_a])
	{
		if (*dec <= ((data->size_array - data->top_b) / 2) + data->top_b)
			ra(data);
		else
			rra(data);
	}
	pb(data);
	(*count)--;
	*j = data->top_a;
	*dec = data->size_array - 1;
}

void	search_top(t_data *data, int *j, int *count, int *dec)
{
	int	temp;

	temp = data->stack_a[*j];
	while (temp != data->stack_a[data->top_a])
	{
		if (*j <= ((data->size_array - data->top_b) / 2) + data->top_b)
			ra(data);
		else
			rra(data);
	}
	pb(data);
	(*count)--;
	*j = data->top_a;
	*dec = data->size_array -1;
}

void	ag_find_number_in_the_range(t_data *data, int *count, int *j,
		int *range)
{
	int	dec;

	dec = data->size_array - 1;
	while (*j < data->size_array)
	{
		if (data->stack_a[*j] <= data->order_array[*range])
			search_top(data, j, count, &dec);
		else if (data->stack_a[dec] <= data->order_array[*range])
			search_down(data, j, count, &dec);
		else
		{
			(*j)++;
			dec--;
		}
	}
}

void	push_to_stack_b_100(t_data *data)
{
	int	range;
	int	count;
	int	j;
	int	range2;

	range = data->size_array / 6;
	range2 = range;
	count = data->size_array;
	while (range <= data->size_array)
	{
		j = data->top_a;
		ag_find_number_in_the_range(data, &count, &j, &range);
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
