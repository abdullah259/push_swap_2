#include "push_swap.h"

int	*rra(t_data *data)
{
	int temp;
	int i;
	
	i = data->size_array - 1;
	temp = data->stack_a[i];
	while (i > data->top_a)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[data->top_a] = temp;
    write(1, "rra\n", 4);
	return (data->stack_a);
}

/*
1
2
3
4

RRA

4
1
2
3

*/

int	*rrb(t_data *data)
{
	int temp;
	int i;
	
	i = 0;
	temp = data->stack_a[0];
	while (i < data->top_b)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[i] = temp;
    write(1, "rrb\n", 4);
	return (data->stack_a);
}