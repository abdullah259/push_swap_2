/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:39:06 by omar              #+#    #+#             */
/*   Updated: 2022/08/13 00:17:55 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_data *data)
{
	data->size_array = 0;
	data->stack_a = 0;
	data->order_array = 0;
	data->top_a = 0;
	data->top_b = -1;
}

void	check_number(t_data *data)
{
	if (data->size_array == 2 && is_sorted(data))
		sa(data);
	if (data->size_array == 3 && is_sorted(data))
		sort_three4(data);
	else if ((data->size_array == 4 || data->size_array == 5)
		&& is_sorted(data))
		sort_four(data);
	else if ((data->size_array > 5 && data->size_array <= 100)
		&& is_sorted(data))
		sort_hundred(data);
	else if (data->size_array > 100 && is_sorted(data))
		sort_five_hunder(data);
}

int	main(int arc, char **argv)
{
	t_data	data;

	ft_init (&data);
	if (arc < 2)
		ag_exit();
	if (arc > 1)
	{
		if (argv[1][0] == '\0')
			ag_exit();
		check_valid(argv);
		data.join = ft_join_arg(argv);
		data.sp = ft_split(data.join, ' ');
		arr_int(data.sp, &data);
		check_dub(data.stack_a, &data);
		order_array(data.order_array, &data);
		check_number(&data);
		ag_free(&data);
	}
}
