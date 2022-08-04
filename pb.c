#include "push_swap.h"

void	pb(t_data *data)
{
	if (data->top_a >= 0)
	{
		data->stack_b[data->top_b + 1] = data->stack_a[data->top_a];
		data->top_a +=1;
		data->top_b +=1;
		data->size_stack_b++;
        // data->size_array--;
	}
    // printf("Top  B %d\n", data->top_b);
    // printf("Top  A %d\n", data->top_a);
	write(1,"pb\n",3);
}