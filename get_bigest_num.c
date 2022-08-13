/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bigest_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:41:45 by omar              #+#    #+#             */
/*   Updated: 2022/08/13 13:42:16 by omar             ###   ########.fr       */
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
