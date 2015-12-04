/*
** get_game_params.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 16:37:25 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 16:47:36 2015 POBA VANZI Kimberley
*/

#include "my_game.h"
#include "my_tools.h"

int	get_version()
{
  int	version;

  my_putstr("Sur quelle version souhaitez vous jouer ? (3 / 5)\n");
  version = my_getnbr(readLine());
  while (!(version == 3 || version == 5))
    {
      my_putstr("Choisissez entre 3 et 5\n");
      my_putstr("Sur quelle version souhaitez vous jouer ? (3 / 5)\n");
      version = my_getnbr(readLine());
    }
  return (version);
}

int     get_best_of()
{
  int   best_of;

  my_putstr("Combien de manches souhaitez vous jouer\n");
  best_of = my_getnbr(readLine());
  while (!(best_of > 0 && my_is_even(best_of) == 0))
    {
      my_putstr("Choisissez un nombre impair positif\n");
      my_putstr("Combien de manches souhaitez vous jouer\n");
      best_of = my_getnbr(readLine());
    }
  return (best_of);
}
