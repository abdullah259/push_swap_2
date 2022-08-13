/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:38:12 by omar              #+#    #+#             */
/*   Updated: 2022/08/13 13:36:36 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*arr_int(char **sp, t_data *data)
{
	int	m;

	m = 0;
	while (sp[data->size_array])
		data->size_array++;
	data->stack_a = malloc(data->size_array * sizeof(int));
	if (!data->stack_a)
		return (NULL);
	data->order_array = malloc(data->size_array * sizeof(int));
	if (!data->order_array)
		return (NULL);
	while (sp[m])
	{
		data->stack_a[m] = ft_atoi(sp[m], data);
		data->order_array[m] = ft_atoi(sp[m], data);
		m++;
	}
	return (NULL);
}
