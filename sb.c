/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:39 by omar              #+#    #+#             */
/*   Updated: 2022/08/09 16:11:34 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_data *data)
{
	int	temp;

	temp = data->stack_a[data->top_b];
	data->stack_a[data->top_b] = data->stack_a[data->top_b - 1];
	data->stack_a[data->top_b - 1] = temp;
	write(1, "sb\n", 3);
}
