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
int	check_doubles(char *s, int i, char c)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (s[j] == c)
			return (0);
		j++;
	}
	return (1);
}
int check_dob(char *str,char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;	
	}
	return (1);
}
int main(int arc, char **sp)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (arc == 3)
	{
		while (sp[1][i])
		{
			if (check_doubles(sp[1],i,sp[1][i]))
			{
				write(1,&sp[1][i],1);
			}
			i++;
		}
		// write(1,"\n",1);
		// printf("this is %d\n",i);
		i = 0;		
		while (sp[2][i])
		{
			if (check_dob(sp[1],sp[2][i]) == 1 && check_doubles(sp[2],i,sp[2][i]) == 1)
			{
				write(1,&sp[2][i],1);
			}
			i++;
		}
		
	}
	write(1,"\n",1);
	
}