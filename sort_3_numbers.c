/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:42 by omar              #+#    #+#             */
/*   Updated: 2022/08/12 19:51:44 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	last_case(t_data *data)
{
	if (data->stack_a[data->top_a] < data->stack_a[data->top_a + 1]
		&& data->stack_a[data->top_a + 1] > data->stack_a[data->top_a + 2]
		&& data->stack_a[data->top_a] > data->stack_a[data->top_a + 2])
		rra(data);
}

void	sort_three4(t_data *data)
{
	if (data->stack_a[data->top_a] > data->stack_a[data->top_a + 1]
		&& data->stack_a[data->top_a + 1] < data->stack_a[data->top_a + 2]
		&& data->stack_a[data->top_a] < data->stack_a[data->top_a + 2])
		sa(data);
	else if (data->stack_a[data->top_a] > data->stack_a[data->top_a + 1]
		&& data->stack_a[data->top_a + 1] > data->stack_a[data->top_a + 2]
		&& data->stack_a[data->top_a] > data->stack_a[data->top_a + 2])
	{
		sa(data);
		rra(data);
	}
	else if (data->stack_a[data->top_a] > data->stack_a[data->top_a + 1]
		&& data->stack_a[data->top_a + 1] < data->stack_a[data->top_a + 2]
		&& data->stack_a[data->top_a] > data->stack_a[data->top_a + 2])
		ra(data);
	else if (data->stack_a[data->top_a] < data->stack_a[data->top_a + 1]
		&& data->stack_a[data->top_a + 1] > data->stack_a[data->top_a + 2]
		&& data->stack_a[data->top_a] < data->stack_a[data->top_a + 2])
	{
		sa(data);
		ra(data);
	}
	last_case(data);
}
