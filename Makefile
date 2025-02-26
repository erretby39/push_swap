NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address 
CFILES = ft_split_utls.c push.c r_rotate.c sort_v1.c utls.c chek.c linked.c \
	push_swap.c push_swap_utls.c sort3.c swap.c ft_split.c rotate.c sort5.c 

OFILSE = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILSE)
	$(CC) $(CFLAGS) $(OFILSE) -o $(NAME)

clean:
	rm -f $(OFILSE)

fclean: clean
	rm -f $(NAME)

re: fclean all