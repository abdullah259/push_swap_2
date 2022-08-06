#include "push_swap.h"

int	is_sorted(t_data *data)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < data->size_array)
	{
		if (data->stack_a[i] == data->order_array[i])
			j++;
		i++;
	}
	if (j == data->size_array)
		return (0);
	return (1);
}