/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:16 by omar              #+#    #+#             */
/*   Updated: 2022/08/09 16:09:10 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ra(t_data *data)
{
	int	i;
	int	temp;

	temp = data->stack_a[data->top_a];
	i = data->top_a;
	while (i < data->size_array - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[data->size_array - 1] = temp;
	write(1, "ra\n", 3);
	return (data->stack_a);
}

int	*rb(t_data *data)
{
	int	i;
	int	temp;

	temp = data->stack_a[data->top_b];
	i = data->top_b;
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[i] = temp;
	write (1, "rb\n", 3);
	return (data->stack_a);
}
