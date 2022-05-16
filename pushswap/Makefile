NAME= push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC = push_swap.h
ARG := $(shell ruby -e "puts (0..4).to_a.shuffle.join(' ')")
SRC = bits.c \
		ft_atoi.c \
		ft_isdigit.c \
		initializeandchecker.c \
		main.c \
		min_max_b.c \
		minandmaxes.c \
		selection_lesser_greater.c \
		selections.c \
		slction_indexandcopy.c \
		swap_and_rotates.c \
		swap_and_rotates2.c \
		a_b_pivots.c \
		sorts.c   \
		all_pivot_sorts.c \
		total_size_kontrol.c


OBJS = $(SRC:.c=.o)

all: $(NAME)

.c.o: $(INC)
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: $(NAME)
	bash tester/tester.sh

count: $(NAME)
	./push_swap $(ARG) | wc -l

run: $(NAME)
	./push_swap $(ARG)

norm:
	@norminette a_b_pivots.c bits.c ft_atoi.c ft_isdigit.c initializeandchecker.c main.c min_max_b.c minandmaxes.c selection_lesser_greater.c selections.c \
		slction_indexandcopy.c swap_and_rotates.c swap_and_rotates2.c all_pivot_sorts.c total_size_kontrol.c push_swap.h

control: $(NAME)
	./push_swap $(ARG) | ./checker_Mac $(ARG)