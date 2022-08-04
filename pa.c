#include "push_swap.h"

void	pa(t_data *data)
{
	if (data->top_b >= 0)
	{
		// data->stack_a[data->top_a + 1] = data->stack_b[data->top_b];
		data->top_a -=1;
		data->top_b -=1;
		// data->size_stack_b--;
        // data->size_array++;
	}
	write(1,"pa\n",3);
}