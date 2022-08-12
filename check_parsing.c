/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:27:09 by omar              #+#    #+#             */
/*   Updated: 2022/08/12 18:29:16 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_after_num(char c, char c1, char c2)
{
	if ((c == '-' || c == '+' || c == '=') && (c1 >= '0' && c1 <= '9')
		&& (c2 == '-' || c2 == '+' || c2 == '='))
		ag_exit();
	if ((c == '-' || c == '+') && (c1 == '\0' || c1 == ' ' || c1 == '\t'))
		ag_exit();
	if (c1 == '-' || c1 == '+')
		ag_exit();
}

void	check_valid(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
			{
				check_after_num(argv[i][j], argv[i][j + 1], argv[i][j + 2]);
			}
			j++;
		}
		i++;
	}
}
