#include "push_swap.h"

void	sort_three(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1] && data->stack_a[1] < data->stack_a[2]
		&& data->stack_a[0] < data->stack_a[2])
	{
		sa(data);
	}
	else if (data->stack_a[0] > data->stack_a[1] && data->stack_a[1] > data->stack_a[2]
			&& data->stack_a[0] > data->stack_a[2])
	{
		sa(data);
		rra(data);
	}
	else if (data->stack_a[0] > data->stack_a[1] && data->stack_a[1] < data->stack_a[2]
			&& data->stack_a[0] > data->stack_a[2])
	{
		ra(data);
	}
	else if (data->stack_a[0] < data->stack_a[1] && data->stack_a[1] > data->stack_a[2]
			&&
			data->stack_a[0] < data->stack_a[2])
	{
		sa(data);
		ra(data);
	}
	else if (data->stack_a[0] < data->stack_a[1] && data->stack_a[1] > data->stack_a[2] 
			&& data->stack_a[0] > data->stack_a[2])
	{
		rra(data);
	}
	else
		printf("sorted");
}

void	sort_three4(t_data *data)
{
    int a = data->top_a;
    int b = data->top_a + 1;
    int c = data->top_a + 2;
	if (data->stack_a[a] > data->stack_a[b] && data->stack_a[b] < data->stack_a[c]
		&& data->stack_a[a] < data->stack_a[c])
	{
		sa(data);
	}
	else if (data->stack_a[a] > data->stack_a[b] && data->stack_a[b] > data->stack_a[c]
			&& data->stack_a[a] > data->stack_a[c])
	{
		sa(data);
		rra(data);
	}
	else if (data->stack_a[a] > data->stack_a[b] && data->stack_a[b] < data->stack_a[c]
			&& data->stack_a[a] > data->stack_a[c])
	{
		ra(data);
	}
	else if (data->stack_a[a] < data->stack_a[b] && data->stack_a[b] > data->stack_a[c]
			&&
			data->stack_a[a] < data->stack_a[c])
	{
		sa(data);
		ra(data);
	}
	else if (data->stack_a[a] < data->stack_a[b] && data->stack_a[b] > data->stack_a[c] 
			&& data->stack_a[a] > data->stack_a[c])
	{
		rra(data);
	}
}