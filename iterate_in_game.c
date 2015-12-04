/*
** iterate_in_game.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 17:20:03 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 18:09:31 2015 POBA VANZI Kimberley
*/
#include "my_game.h"
#include "my_tools.h"
#include <stdlib.h>

void    first_play(t_game **the_game, int argc, char **argv)
{
  int play;

  my_putstr("\033[H\033[2J");
  if (the_game != NULL)
    play = init_game(the_game, argc, argv);
  if (play == 1)
    {
      display_game_params(the_game);
      play_game(the_game);
    }
}

void    other_games(t_game **the_game)
{
  free(*the_game);
  set_game_params(the_game, get_version(), get_best_of());
  reinit_game(the_game);
  display_game_params(the_game);
  play_game(the_game);
}

void	display_game_params(t_game **the_game)
{
  my_putstr("******************************\n");
  my_putstr("VERSION : ");
  my_put_nbr((*the_game)->version);
  my_putstr("\nBEST OF / ");
  my_put_nbr((*the_game)->best_of);
  my_putstr("\nVos options:\n");
  if ((*the_game)->version == 3)
    my_putstr("pierre - feuille - ciseaux\n");
  else
    my_putstr("pierre - feuille - ciseaux - lezard - spock\n");
  my_putstr("******************************************\n\n");
}
