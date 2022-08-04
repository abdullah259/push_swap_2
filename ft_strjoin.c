#include "push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ret;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (0);
	i = 0;
	j = 0;
	ret = malloc ((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
	if (!ret)
		return (NULL);
	if (s1)
	{
		while (s1[i] != '\0')
		{
			ret[i] = s1[i];
			i++;
		}
	}
	ret[i] = ' ';
	i++;
	while (s2[j] != 0)
		ret[i++] = s2[j++];
	ret[i] = '\0';
	free(s1);
	return (ret);
}

char	*ft_join_arg(char **argv)
{
	int	i;
	char *temp;

	i = 1;
	temp = ft_strdup("");
	while (argv[i])
	{
		temp = ft_strjoin(temp,argv[i]);
		i++;
	}
	return (temp);
}