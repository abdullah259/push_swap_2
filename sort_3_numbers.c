/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:42 by omar              #+#    #+#             */
/*   Updated: 2022/08/09 16:23:51 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three4(t_data *data)
{
	int	a;

	a = data->top_a;
	if (data->stack_a[a] > data->stack_a[a + 1]
		&& data->stack_a[a + 1] < data->stack_a[a + 2]
		&& data->stack_a[a] < data->stack_a[a + 2])
		sa(data);
	else if (data->stack_a[a] > data->stack_a[a + 1]
		&& data->stack_a[a + 1] > data->stack_a[a + 2]
		&& data->stack_a[a] > data->stack_a[a + 2])
	{
		sa(data);
		rra(data);
	}
	else if (data->stack_a[a] > data->stack_a[a + 1]
		&& data->stack_a[a + 1] < data->stack_a[a + 2]
		&& data->stack_a[a] > data->stack_a[a + 2])
		ra(data);
	else if (data->stack_a[a] < data->stack_a[a + 1]
		&& data->stack_a[a + 1] > data->stack_a[a + 2]
		&& data->stack_a[a] < data->stack_a[a + 2])
	{
		sa(data);
		ra(data);
	}
	else if (data->stack_a[a] < data->stack_a[a + 1]
		&& data->stack_a[a + 1] > data->stack_a[a + 2]
		&& data->stack_a[a] > data->stack_a[a + 2])
		rra(data);
}
