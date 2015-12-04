/*
** battle_v5.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 09:27:55 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 11:06:58 2015 POBA VANZI Kimberley
*/

#include "my_game.h"
#include "my_tools.h"

void	battle_v5(t_game **game, char *gamer_st, char *compu_st)
{
  int res;

  if ((!(my_strcmp(gamer_st, "pierre") == 0 ||
	 my_strcmp(gamer_st, "feuille") == 0 ||
	 my_strcmp(gamer_st, "lezard") == 0 ||
	 my_strcmp(gamer_st, "spock") == 0 ||
	 my_strcmp(gamer_st, "ciseaux") == 0)) || (my_strcmp(compu_st, gamer_st) == 0))
      res = 0;
  else if ((my_strcmp(gamer_st, "pierre") == 0 &&
       (my_strcmp(compu_st, "ciseaux") == 0 || my_strcmp(compu_st, "lezard") == 0)) ||
      (my_strcmp(gamer_st, "feuille") == 0 &&
       (my_strcmp(compu_st, "spock") == 0 || my_strcmp(compu_st, "pierre") == 0)) ||
      (my_strcmp(gamer_st, "ciseaux") == 0 &&
       (my_strcmp(compu_st, "lezard") == 0 || my_strcmp(compu_st, "feuille") == 0)) ||
      (my_strcmp(gamer_st, "lezard") == 0 &&
       (my_strcmp(compu_st, "feuille") == 0 || my_strcmp(compu_st, "spock") == 0)) ||
      (my_strcmp(gamer_st, "spock") == 0 &&
       (my_strcmp(compu_st, "pierre") == 0 || my_strcmp(compu_st, "ciseaux") == 0)))
    {
      (*game)->player_pts++;
      res = 1;
    }
  else
  {
    (*game)->comput_pts++;
    res = -1;
  }
  print_res(gamer_st, compu_st, (*game)->player_pts, (*game)->comput_pts, res);
}
