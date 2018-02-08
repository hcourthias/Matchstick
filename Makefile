##
## EPITECH PROJECT, 2017
## make
## File description:
## make
##

NAME	= matchstick

CC	= gcc

RM	= rm -f

SRCS	= 	./lib/get_nbr.c				\
		./lib/get_next_line.c			\
		./lib/my_putstr.c			\
		./lib/my_is_pair.c			\
		./lib/my_putchar.c			\
		./lib/my_putnbr.c			\
		./lib/my_strlen.c			\
		./src/input_error.c			\
		./src/print_game_board.c		\
		./src/print_user_turn.c			\
		./src/make_user_play.c			\
		./src/make_ia_play_random.c		\
		./src/check_winner.c			\
		./src/get_input_info.c			\
		./src/init_struct.c			\
		./src/matchstick.c			\
		./src/print_ia_turn.c			\
		./src/check_if_pair.c			\
		./src/final_round.c			\
		./src/ia_hard.c				\

SRCS_MAIN	= ./main.c

SRCS_TEST	= ./tests/testlib_2.c				\
		./tests/test_error2.c				\
		./tests/test_finalround.c			\
		./tests/test_finalsolv.c			\
		./tests/test_init.c				\
		./tests/test_pair.c				\
		./tests/test_pair2.c				\
		./tests/test_solv.c				\
		./tests/test_win.c				\
		./tests/tests_ia.c				\
		./tests/testlib.c				\
		./tests/testerror.c				\
		./tests/test_getnbrlines.c			\
		./tests/test_getnbrmatches.c			\
		./tests/test_random.c				\
		./tests/tests_random_ia.c			\
		./tests/test_make_user_play.c			\
		./tests/test_gameloop.c				\
		./tests/test_print.c				\
		./tests/bonus/test_winbonus.c			\
		./tests/bonus/test_gameloopbonus.c		\


SRCS_BONUS	= ./bonus/src/check_winner_bonus.c		\
		./bonus/src/matchstick_bonus.c

OBJS	= $(SRCS:.c=.o) \
	$(SRCS_MAIN:.c=.o)

CFLAGS = -I ./include/ -W -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)
	rm $(OBJS)

tests_run: $(SRCS_TEST)
	$(CC) $(SRCS_TEST) $(SRCS) $(SRCS_BONUS) -I./bonus/include/ -W -Wextra -o units --coverage -lcriterion
	./units

wc:
	wc $(SRCS) ./include/*

clean:
	$(RM) $(OBJS) *.g*

fclean: clean
	$(RM) $(NAME) units

re: fclean all

print_tests:
		lcov --directory . -c -o rapport.info
		genhtml -o ./report -t "code coverage report" rapport.info
		open ./report/index.html &>/dev/null
