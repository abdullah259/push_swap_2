#include "push_swap.h"

int	get_smallest(t_data *data)
{
	int i;
	int lowstind;
	int lowest;

	i = data->top_a;
	lowstind = i;
	lowest = data->stack_a[i];
	while (i < data->size_array)
	{
		if (data->stack_a[i] < lowest)
		{
			lowest = data->stack_a[i];
			lowstind = i;
		}
		i++;
	}
	return (lowstind);
}

void	sort_four(t_data *data)
{
	int index;
	
	index = get_smallest(data);
	while (data->stack_a[data->top_a] != data->order_array[0])
	{
		if (index <= data->size_array / 2)
			ra(data);
		else
			rra(data);
	}
	pb(data);
	if (data->size_array == 5)
	{
		index = get_smallest(data);
		while (data->stack_a[data->top_a] != data->order_array[1])
		{
			if (index <= data->size_array / 2)
				ra(data);
			else
				rra(data);
		}
		pb(data);
		sort_three4(data);
		pa(data);
		pa(data);
	}
	else
	{
		sort_three4(data);
		pa(data);
	}
	for (int i = data->top_a; i < data->size_array; i++)
	{
		printf(" %d",data->stack_a[i]);
	}
	printf("\n");
}
