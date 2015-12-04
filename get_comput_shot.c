/*
** get_comput_shot.c for FDI_DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 30 18:49:26 2015 POBA VANZI Kimberley
** Last update Fri Oct 30 18:56:12 2015 POBA VANZI Kimberley
*/

#include "my_game.h"
#include <stdlib.h>

char	*get_comput_shot(t_game **game)
{
  int	shot;

  if ((*game)->version == 3)
    shot = rand() % 3 + 1;
  else
    shot = rand() % 5 + 1;
  if (shot == 1)
    return ("pierre");
  else if (shot == 2)
    return ("feuille");
  else if (shot == 3)
    return ("ciseaux");
  else if (shot == 4)
    return ("lezard");
  else
    return ("sposk");
}
