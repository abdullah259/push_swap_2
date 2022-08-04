#include "push_swap.h"

void	*arr_int(char **sp,t_data *data)
{
	int m;

	m = 0;
	while (sp[data->size_array])
		data->size_array++;
	data->stack_a = malloc(data->size_array * sizeof(int));
	if (!data->stack_a)
		return (NULL);
	data->stack_b = malloc(data->size_array * sizeof(int));
	if (!data->stack_b)
		return (NULL);
	data->order_array = malloc(data->size_array * sizeof(int));
	if (!data->order_array)
		return (NULL);
	while (sp[m])
	{
		data->stack_a[m] = ft_atoi(sp[m]);
		data->order_array[m] = ft_atoi(sp[m]);
		m++;
	}
	return (NULL);
}