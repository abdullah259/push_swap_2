/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:14:45 by omar              #+#    #+#             */
/*   Updated: 2022/08/10 13:19:22 by omar             ###   ########.fr       */
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
	int dec;
	int j_holder;

	j_holder = *j; 
	dec = data->size_array - 1;
	while (*j < data->size_array)
	{
		if (data->stack_a[*j] <= data->order_array[*range])
		{
			temp = data->stack_a[*j]; // 20
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
			dec = data->size_array - 1;
		}
		else if (data->stack_a[dec] <= data->order_array[*range])
		{
			temp = data->stack_a[dec];
			while (temp != data->stack_a[data->top_a])
			{
				if (dec <= ((data->size_array - data->top_b) / 2) + data->top_b)
					ra(data);
				else
					rra(data);
			}
			pb(data);
			(*count)--;
			*j = data->top_a;
			dec = data->size_array - 1;
		}
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
	j = 0;
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

void	sort_hundred(t_data *data)
{
	int		arr_order;
	int		index;
	bool	a;

	push_to_stack_b_100(data);
	// for (int i = 0; i < data->top_b + 1; i++)
	// {
	// 	printf(" stack_b %d\n",data->stack_a[i]);
	// }
	// printf("\n");
	// for (int i = 0; i < data->top_a; i++)
	// {
	// 	printf(" stack_a %d\n",data->stack_a[i]);
	// }
	a = true;
	arr_order = data->size_array - 1;
	while (a)
	{
		index = get_bigest_index(data);
		while (data->stack_a[data->top_b] != data->order_array[arr_order])
		{
			if (index >= ((data->size_array - data->top_b) / 2) + data->top_b)
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
