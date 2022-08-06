/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:42 by omar              #+#    #+#             */
/*   Updated: 2022/08/06 16:39:43 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three4(t_data *data)
{
    int a = data->top_a;
    int b = data->top_a + 1;
    int c = data->top_a + 2;
	if (data->stack_a[a] > data->stack_a[b] && data->stack_a[b] < data->stack_a[c]
		&& data->stack_a[a] < data->stack_a[c])
		sa(data);
	else if (data->stack_a[a] > data->stack_a[b] && data->stack_a[b] > data->stack_a[c]
			&& data->stack_a[a] > data->stack_a[c])
	{
		sa(data);
		rra(data);
	}
	else if (data->stack_a[a] > data->stack_a[b] && data->stack_a[b] < data->stack_a[c]
			&& data->stack_a[a] > data->stack_a[c])
		ra(data);
	else if (data->stack_a[a] < data->stack_a[b] && data->stack_a[b] > data->stack_a[c]
			&&
			data->stack_a[a] < data->stack_a[c])
	{
		sa(data);
		ra(data);
	}
	else if (data->stack_a[a] < data->stack_a[b] && data->stack_a[b] > data->stack_a[c] 
			&& data->stack_a[a] > data->stack_a[c])
		rra(data);
}