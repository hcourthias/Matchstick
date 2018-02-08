/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** header for the project
*/

//###|include|###//
#include "stdlib.h"
#include "board.h"

//###|lib function|###//
int my_getnbr(char *str);
char *re_alloc(char *str);
char *get_next_line(int fd);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_is_pair(int nb);
void my_put_nbr(int nb);

//###|check_winner.c|###//
int check_winner(board_t *board);
int random_matches(board_t *board);
int random_line(board_t *board);

//###|get_input_info.c|###//
int get_number_line(char *str, board_t *board);
int get_number_matches(char *str, board_t *board);

//###|init_struct.c|###//
void init_struct(board_t *board, char **argv);
int *fill_tab_of_stick(board_t *board);

//###|input_error.c|###//
void print_text_error(board_t *board);
int input_error(int argc, char **argv);
int check_error_matches(char* str, board_t *board);
int check_error_line(int number_line, char *str, int lines);

//###|make_ia_play.c|###//
void make_ia_play_random(board_t *board);
int make_ia_hard_play(board_t *board);

//###|make_user_play.c|###//
int make_user_play(board_t *board);
int check_number_matches(char* str, board_t *board);

//###|matchstick.c|###//
int matchstick(char **argv, board_t *board);

//###|print_game_board.c|###//
void print_window_of_board(int line);
void print_game_board(int lines);

//###|print_ia_turn.c|###//
void print_updated_board_game_ia (board_t *board);
void print_text_info_ia(board_t *board);

//###|print_user_turn.c|###//
void print_updated_board_game (board_t *board);
void print_text_info(board_t *board);

//###|final_round.c|###//
int find_final_solution(board_t *board, int big, int where, int one);
int final_round(board_t *board);

//###|check_if_pair.c|###//
void one_is_pair(board_t *board, int where);
void one_is_not_pair(board_t *board, int where);

//###|ia_hard.c|###//
int find_a_solution(board_t *board, int i);
int find_solv_xor(board_t *board);
int xor(board_t *board);

//###|BONUS|###//
int check_winner_bonus(board_t *board);
int matchstick_bonus(char **argv, board_t *board);
void print_updated_board_game_ia_bonus(board_t *board);
void print_text_info_ia_bonus(board_t *board);
void print_updated_board_game_bonus (board_t *board);
void print_text_info_bonus(board_t *board);
int check_number_matches_bonus(char* str, board_t *board);
int make_user_play_bonus(board_t *board);
