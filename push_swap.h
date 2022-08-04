# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
typedef	struct	s_data {
	int size_array;
	int	*stack_a;
	int *stack_b;
	int	*order_array;
	int	top_a;
	int top_b;
	int size_stack_b;
}	t_data;

char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	check_dub(int *num,t_data *data);
char	*ft_join_arg(char **argv);
int		ft_atoi(char *str);
char	*ft_strdup(const char *s1);
void	*arr_int(char **sp,t_data *data);
void	sa(t_data *data);
int		*ra(t_data *data);
int		*rra(t_data *data);
int		*rb(t_data *data);
int		*rrb(t_data *data);
void	pb(t_data *data);
void	pa(t_data *data);
void	sort_three(t_data *data);
void	sort_three4(t_data *data);
void	sort_four(t_data *data);
void	order_array(int *array, t_data *data);
void	sort_hundred(t_data *data);
void	sb(t_data *data);