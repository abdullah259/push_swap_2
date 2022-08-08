/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:38:32 by omar              #+#    #+#             */
/*   Updated: 2022/08/09 01:24:06 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static	int	word_count(char *s, char c)
{
	int	i;
	int	w;
	int	j;

	j = 0;
	w = 0;
	i = 0;
	if (*s == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] != c && w == 0)
		{
			w = 1;
			j++;
		}
		else if (s[i] == c)
			w = 0;
		i++;
	}
	return (j);
}

static	int	length_str(char *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[i + start])
	{
		if (s[i + start] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**fill_str(char *s, char c, int i, char **ptr)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (s[i])
	{
		ptr[j] = malloc((length_str((char *)s, c, i) + 1) * sizeof(char));
		if (!ptr)
			return (NULL);
		k = 0;
		while (s[i] != c && s[i])
		{
			ptr[j][k] = s[i];
			i++;
			k++;
		}
		ptr[j][k] = '\0';
		j++;
		while (s[i] == c)
			i++;
	}
	ptr[j] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;

	i = 0;
	ptr = malloc((word_count((char *)s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (s[i] == c)
		i++;
	ptr = fill_str((char *) s, c, i, ptr);
	return (ptr);
}
