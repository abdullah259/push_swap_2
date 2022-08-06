/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:38:52 by omar              #+#    #+#             */
/*   Updated: 2022/08/06 19:10:35 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_data *data)
{
	if (data->top_a >= 0)
	{
		// data->stack_b[data->top_b + 1] = data->stack_a[data->top_a];
		data->top_a +=1;
		data->top_b +=1;
		data->size_stack_b++;
	}
	write(1,"pb\n",3);
}