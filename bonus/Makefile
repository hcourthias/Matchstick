##
## EPITECH PROJECT, 2017
## make
## File description:
## make
##

NAME	= matchstick

CC	= gcc

RM	= rm -f

SRCS	= 	../lib/get_nbr.c			\
		../lib/get_next_line.c			\
		../lib/my_putstr.c			\
		../lib/my_is_pair.c			\
		../lib/my_putchar.c			\
		../lib/my_putnbr.c			\
		../lib/my_strlen.c			\
		../src/input_error.c			\
		../src/print_game_board.c		\
		../src/print_user_turn.c		\
		../src/print_ia_turn.c			\
		../src/make_ia_play_random.c		\
		./src/check_winner_bonus.c		\
		../src/get_input_info.c			\
		../src/init_struct.c			\
		./src/matchstick_bonus.c		\
		../src/check_if_pair.c			\
		../src/final_round.c			\
		../src/ia_hard.c			\
		../src/make_user_play.c

SRCS_MAIN	= ./main.c

OBJS	= $(SRCS:.c=.o) \
	$(SRCS_MAIN:.c=.o)

CFLAGS = -I ./include/ -W -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)
	rm $(OBJS)

wc:
	wc $(SRCS) ./include/*

clean:
	$(RM) $(OBJS) *.g*

fclean: clean
	$(RM) $(NAME) units

re: fclean all
