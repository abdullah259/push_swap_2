CC = gcc
CFLAGS = -Werror -Wextra -Wall -g

NAME=push_swap

SRC = push_swap.c check_dublicate.c ft_split.c ft_strjoin.c ft_atoi.c ft_strdup.c \
	  array_int.c sa.c ra.c rra.c pb.c pa.c sort_3_numbers.c sort_5_numbers.c order_array.c sort_100.c sb.c \
	  sort_500.c is_sorted.c exit.c check_parsing.c ag_free.c get_bigest_num.c

OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS)  -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o push_swap $(OBJ) -o $(NAME)

re: fclean all

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

.PHONY: all clean fclean