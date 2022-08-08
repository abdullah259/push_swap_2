/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:38:21 by omar              #+#    #+#             */
/*   Updated: 2022/08/09 01:26:17 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int				i;
	int				pon;
	unsigned int	num;

	num = 0;
	i = 0;
	pon = 1;
	if (str[i] == '-' || str[i] == '+')
		pon *= 1 - 2 * (str[i++] == '-');
	if (!is_digit(str[i]))
	{
		write(1,"error here \n",12);
		exit(1);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		if (num > 2147483648 && pon == -1)
			exit(0);
		else if (num > 2147483647 && pon == 1)
			exit(0);
		i++;
	}
	return ((int)(pon * num));
}
