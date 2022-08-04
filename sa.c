#include "push_swap.h"
void		sa(t_data *data)
{
	int temp;

	temp = data->stack_a[data->top_a];
	data->stack_a[data->top_a] = data->stack_a[data->top_a + 1];
	data->stack_a[data->top_a + 1] = temp;
	write(1, "sa\n", 3);
}