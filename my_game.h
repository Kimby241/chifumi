/*
** my_game.h for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 13:09:12 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 17:38:24 2015 POBA VANZI Kimberley
*/

#ifndef MY_GAME_H_
#define MY_GAME_H_

typedef struct  s_battle
{
  char *gamer_shot;
  char *compu_shot;
}t_battle;

typedef struct	s_shot
{
  int		total_gamer;
  int		total_compu;
  char		*shot_gamer;
  char		*shot_compu;
  int		round;
  struct s_shot	*next;
}t_shot;

typedef struct	s_game
{
  int		version;
  int		best_of;
  int		player_pts;
  int		comput_pts;
  t_shot	*game_shots;
}t_game;

int		init_game(t_game **game, int argc, char **argv);
int		re_init_game(char *version, char *best_of);
void		display_input_errors();
int		set_game_params(t_game **game, int version, int best_of);
int		play_game(t_game **game);
int		ask_next();
void		battle(t_game **game, char *gamer_shot, char *compu_shot, int round);
void		battle_v3(t_game **game, char *gamer_shot, char *compu_shot);
void		battle_v5(t_game **game, char *gamer_shot, char *compu_shot);
char		*get_comput_shot(t_game **game);
char		*get_gamer_shot();
int		get_version();
int		get_best_of();
t_shot		*delete_shots(t_shot *shots);
void		print_histo(t_game **game);
void		print_res(char *gamer, char *compu, int total_c, int total_g, int res);
void		print_eq_shots(int round);
void		print_invalid_shot(int round);
void		reinit_game(t_game **game);
int		ask_next();
void		print_err_malloc();
t_battle        lunch_battle(t_game **game, int round);
int		check_value(t_game **game, char *gamer_shot);
void		first_play(t_game **game, int argc, char **argv);
void		other_games(t_game **game);
void		display_game_params(t_game **game);

#endif /* !MY_GAME_H_ */
