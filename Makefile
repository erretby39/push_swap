NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Werror -Wextra #-g -fsanitize=address
CFILES = ft_split_utls.c push.c r_rotate.c sort_v1.c utls.c chek.c linked.c \
	push_swap.c push_swap_utls.c sort3.c swap.c ft_split.c rotate.c sort5.c
CBFILES = bonus/checker.c bonus/get_next_line.c \
	bonus/get_next_line_utils.c push_swap_utls.c ft_split_utls.c \
	utls.c chek.c linked.c ft_split.c swap.c push.c rotate.c r_rotate.c
OFILSE = $(CFILES:.c=.o)
OBFILSE = $(CBFILES:.c=.o)

all: $(NAME)

bonus: $(NAME_BONUS)

$(NAME): $(OFILSE)
	$(CC) $(CFLAGS) $(OFILSE) -o $(NAME)

$(NAME_BONUS): $(OBFILSE)
	$(CC) $(CFLAGS) $(OBFILSE) -o $(NAME_BONUS)

clean:
	rm -f $(OFILSE) $(OBFILSE)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all
