/*
** init_game.c for FDI-DEVC CHIFUMI init_game in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 30 12:03:40 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 15:30:29 2015 POBA VANZI Kimberley
*/

#include "my_game.h"
#include "my_inputs.h"
#include "my_tools.h"
#include <stdlib.h>
#include <unistd.h>

/*
** Initialise la partie
*/
int	init_game(t_game **game, int argc, char **argv)
{
  int	v;
  int	bo;

  if (!(argc == 5 && (my_strcmp(argv[1], "-v") == 0 &&
   my_strcmp(argv[3], "-e") == 0)))
    {
      display_input_errors();
      return (-1);
    }
  v = my_getnbr(argv[2]);
  bo = my_getnbr(argv[4]);
  if (!((v == 3 || v == 5) && (my_is_even(bo) == 0 && bo > 0)))
    {
      display_input_errors();
      return (-1);
    }
  else
    return set_game_params(game, v, bo);
}

int	set_game_params(t_game **game, int version, int best_of)
{
  *game = malloc(sizeof(t_game));
  (*game)->version = version;
  (*game)->best_of = best_of;
  //(*game)->shots_values = init_shots_tab(version);
  (*game)->player_pts = 0;
  (*game)->comput_pts = 0;
  return (1);
}

void	display_input_errors()
{
  my_putstr("Arguments non valides.\n");
  my_putstr("Entrez: ./chifumi -v \"version (3 ou 5)\" ");
  my_putstr("-e \"nombre de manche (nombre impaire)\"\n");
}
