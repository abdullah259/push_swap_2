/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:20:39 by aghazi            #+#    #+#             */
/*   Updated: 2022/08/06 20:52:43 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s1[i])
		i++;
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	ptr[i] = '\0';
	while (s1[--i] && i >= 0)
	{
		ptr[i] = s1[i];
	}
	return (ptr);
}
