#include "push_swap.h"

void	sort_hundred(t_data *data)
{
	int range;
	int count;
    int range2;
	int j;

	range = data->size_array / 6;
	j = 0;
    range2 = range;
    count = data->size_array;
	while (range <= data->size_array)
	{
		j = data->top_a;
		while (j < data->size_array)
		{
			if (data->stack_a[j] <= data->order_array[range])
			{
				int temp = data->stack_a[j];
				while (temp != data->stack_a[data->top_a])
				{
					if (j <= data->size_array / 2)
						ra(data);
					else
						rra(data);
				}
				pb(data);
                count--;
			}
			j++;
		}
		range += range2;
	}
    while (count)
    {
        pb(data);
        count--;
    }
    printf("this is count %d\n",count);
    // printf("this is top_a %d top_b %d\n",data->top_b,data->size_stack_b);
	// if (data->top_b < data->size_stack_b)
	// {
	// 	count = data->size_stack_b - data->top_b;
	// 	while (count)
	// 	{
	// 		pb(data);
	// 		count--;
	// 	}	
	// }
	int b;
	int bigest;
	int index;

	b = 0;
	bigest = data->stack_a[data->top_b];
	index = 0;
	while (b < data->top_b)
	{
		if (bigest < data->stack_a[data->top_b])
		{
			bigest = data->stack_a[data->top_b];
			index = b;
		}
		b++;
	}
	// sb(data);
	printf("this is the biggest %d\n",bigest);
	// printf("this is top_b in stack_b %d\n",data->stack_b[data->top_b]);
	// pa(data);

    // pb(data);
    // pb(data);
	int	m = 0;
	int	n = 0;
    while (n < data->size_array)
    {
        printf(" %d",data->stack_a[m]);
        m++;
        n++;
    }
    // pa(data);
    printf("\n");
    // rrb(data);
    // rb(data);
    // sb(data);
    pa(data);
    // m = 0;
	n = data->top_b;
    while (n >= 0)
    {
        printf(" %d",data->stack_a[n]);
        n--;
    }
    printf("\n");
    printf("this is number top_b %d\n",data->stack_a[data->top_b]);
}