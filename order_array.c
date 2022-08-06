/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:38:47 by omar              #+#    #+#             */
/*   Updated: 2022/08/06 20:57:38 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *num1, int *num2)
{
	int	temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void	order_array(int *array, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->size_array)
	{
		j = i + 1;
		while (j <= data->size_array - 1)
		{
			if (array[i] > array[j])
				ft_swap (&array[i], &array[j]);
			j++;
		}
		i++;
	}
}
