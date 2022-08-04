#include "push_swap.h"

void	check_after_num(char c, char c1, char c2)
{
	if ((c == '-' || c == '+') && (c1 >= '0' && c1 <= '9') &&
		(c2 == '-' || c2 == '+'))
	{
		printf("you have not number bacuse there is not exist number before - or + then number\n");
		exit(1);
	}
	if ((c == '-' || c == '+') && (c1 == '\0'|| c1 == ' ' || c1 == '\t'))
	{
		printf("ther is single char no numbers\n");
		exit(1);
	}
	if (c1 == '-' || c1 == '+')
	{
		printf("there is muluplie char\n");
		exit(1);
	}
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

void	ft_init(t_data *data)
{
	data->size_array = 0;
	data->stack_a = 0;
	data->stack_b = 0;
	data->order_array = 0;
	data->top_a = 0;
	data->top_b = 0;
	data->size_stack_b = 0;
}

int main(int arc, char **argv)
{
	int i;
	char *join;
	char **sp;
	// int m;
	// int n;
	t_data data;

	ft_init (&data);
	data.size_array = 0;
	i = 1;
	if (arc < 2)
	{
		write(1,"Error\n",6);
		exit(1);
	}
	if (arc > 1)
	{
		if (argv[i][0] == '\0')
		{
			ft_putendl_fd("empty string", 2);
			exit(1);
		}
		check_valid(argv);
		join = ft_join_arg(argv);
		sp = ft_split(join,' ');
		arr_int(sp,&data);
		check_dub(data.stack_a,&data);
		order_array(data.order_array, &data);
		data.top_a = 0;
		data.top_b = -1;
		// printf("this is top_a %d    and thtis is top_b%d\n ",data.top_a,data.top_b);
	
    	if (data.size_array == 3)
		{
			sort_three4(&data);
		}
		else if (data.size_array == 4 || data.size_array == 5)
		{
			sort_four(&data);
		}
		else if (data.size_array > 5)
		{
			sort_hundred(&data);
		}

		// printf("this is top_a %d    and thtis is top_b%d\n ",data.top_a,data.top_b);

        
		// printf("\n");
	}

}

