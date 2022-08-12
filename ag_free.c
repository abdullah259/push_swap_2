/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ag_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:25:25 by omar              #+#    #+#             */
/*   Updated: 2022/08/13 00:18:23 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ag_free(t_data *data)
{
	int i;

	i = 0;
	if (data->join != NULL)
		free(data->join);
	if (data->order_array != NULL)
		free(data->order_array);
	if (data->sp != NULL)
	{
		while (data->sp[i])
		{
			free(data->sp[i]);
			i++;
		}
		free(data->sp);
	}
	if (data->stack_a != NULL)
		free(data->stack_a);
	exit(0);
}
