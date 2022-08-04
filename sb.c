#include "push_swap.h"

void	sb(t_data *data)
{
	int temp;

	temp = data->stack_a[data->top_b]; // 1000
	data->stack_a[data->top_b] = data->stack_a[data->top_b - 1];
	data->stack_a[data->top_b - 1] = temp;
	write(1, "sb\n", 3);
}