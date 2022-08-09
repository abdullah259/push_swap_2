/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:36 by omar              #+#    #+#             */
/*   Updated: 2022/08/09 16:10:51 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)
{
	int	temp;

	temp = data->stack_a[data->top_a];
	data->stack_a[data->top_a] = data->stack_a[data->top_a + 1];
	data->stack_a[data->top_a + 1] = temp;
	write(1, "sa\n", 3);
}
