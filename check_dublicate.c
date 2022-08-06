/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dublicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:38:17 by omar              #+#    #+#             */
/*   Updated: 2022/08/06 16:38:18 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dub(int *num,t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->size_array)
	{
		j = i + 1;
		while (j <= data->size_array - 1)
		{
			if (num[i] == num[j])
			{
				printf("the number is %d       seoned number is %d :: i is %d     and j is %d\n",num[i],num[j],i,j);
				exit(1);
			}
			j++;
		}
		i++;
	}
}