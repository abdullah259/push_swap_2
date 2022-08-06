/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isempty.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:38:42 by omar              #+#    #+#             */
/*   Updated: 2022/08/06 16:38:43 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ag_isempty(t_data *data)
{
	if (data->stack_b == -1)
	{
		printf("empty stack B");
		// return (0);
	}
	else
	{
		printf("every thing ok and not empty");
	}
	// return (1);
}