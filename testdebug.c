# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>


// int		ft_atoi(char *str)
// {
// 	int		i;
// 	int		pon;
// 	unsigned int	num;

// 	num = 0;
// 	i = 0;
// 	pon = 1;
// 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
// 		i++;
// 	if (str[i] == 39)
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 		pon *= 1 - 2 * (str[i++] == '-');
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		num = num * 10 + (str[i] - 48);
// 		i++;
// 	}
// 	if (num > 2147483648 && pon == -1)
// 		return (0);
// 	else if (num > 2147483647 && pon == 1)
// 		return (-1);
// 	return ((int)(pon * num));
// }
// size_t	ft_strlcpy(char *det, const char *src, size_t size)
// {
// 	size_t i;

// 	i = 0;
// 	while (i + 1 < size && src[i])
// 	{
// 		det[i] = src[i];
// 		i++;
// 	}
// 	if (size >= 1)
// 	{
// 		det[i] = '\0';
// 	}
// 	while (src[i])
// 	{
// 		i++;
// 	}
// 	return(i);
// }
// int	check_doubles(char *s, int i, char c)
// {
// 	int j;

// 	j = 0;
// 	while (j < i)
// 	{
// 		if (s[j] == c)
// 			return (0);
// 		j++;
// 	}
// 	return (1);
// }
// int check_dob(char *str,char c)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == c)
// 			return (0);
// 		i++;	
// 	}
// 	return (1);
// }
// int main(int arc, char **sp)
// {
// 	int i;
// 	int j;

// 	j = 0;
// 	i = 0;
// 	if (arc == 3)
// 	{
// 		while (sp[1][i])
// 		{
// 			if (check_doubles(sp[1],i,sp[1][i]))
// 			{
// 				write(1,&sp[1][i],1);
// 			}
// 			i++;
// 		}
// 		// write(1,"\n",1);
// 		// printf("this is %d\n",i);
// 		i = 0;		
// 		while (sp[2][i])
// 		{
// 			if (check_dob(sp[1],sp[2][i]) == 1 && check_doubles(sp[2],i,sp[2][i]) == 1)
// 			{
// 				write(1,&sp[2][i],1);
// 			}
// 			i++;
// 		}
		
// 	}
// 	write(1,"\n",1);
	
// }

int	ft_wordlen(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return (i);
}

char	*word_dupe(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *word = malloc(sizeof(char) * (len + 1));
	
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		++i;
	}
	return (word);
}

void	fill_words(char **array, char *str)
{
	int word_index = 0;
	
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{
		array[word_index] = word_dupe(str);
		++word_index;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
}

int		count_words(char *str)
{
	int num_words = 0;
	
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{
		++num_words;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
	return (num_words);
}

char	**ft_split(char *str)
{
	int		num_words;
	char	**array;
	
	num_words = count_words(str);
	array = malloc(sizeof(char *) * (num_words + 1));
	
	array[num_words] = 0;
	fill_words(array, str);
	return (array);
}

int main(int arc, char **argv)
{
	char *s = "       Abdullah      Ghazi          Saeeeed            ";
	int i = 0;
	int j = 0;

	char **sp = ft_split(s);
	while (sp[i])
	{
		printf("%s \n",sp[i]);
		i++;
	}
}