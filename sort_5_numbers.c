/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:46 by omar              #+#    #+#             */
/*   Updated: 2022/08/12 19:58:07 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_smallest(t_data *data)
{
	int	i;
	int	lowstind;
	int	lowest;

	i = data->top_a;
	lowstind = i;
	lowest = data->stack_a[i];
	while (i < data->size_array)
	{
		if (data->stack_a[i] < lowest)
		{
			lowest = data->stack_a[i];
			lowstind = i;
		}
		i++;
	}
	return (lowstind);
}

void	sort_five(t_data *data, int *index)
{
	while (data->stack_a[data->top_a] != data->order_array[1])
	{
		if (*index <= data->size_array / 2)
			ra(data);
		else
			rra(data);
	}
	pb(data);
	sort_three4(data);
	pa(data);
	pa(data);
}

void	sort_four(t_data *data)
{
	int	index;

	index = get_smallest(data);
	while (data->stack_a[data->top_a] != data->order_array[0])
	{
		if (index <= data->size_array / 2)
			ra(data);
		else
			rra(data);
	}
	pb(data);
	if (data->size_array == 5)
	{
		index = get_smallest(data);
		sort_five(data, &index);
	}
	else
	{
		sort_three4(data);
		pa(data);
	}
}
