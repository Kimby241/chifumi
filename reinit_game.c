/*
** reinit_game.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 14:13:40 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 15:56:09 2015 POBA VANZI Kimberley
*/
#include <stdlib.h>
#include "my_game.h"

void	reinit_game(t_game **game)
{
  (*game)->game_shots = delete_shots((*game)->game_shots);
  (*game)->comput_pts = 0;
  (*game)->player_pts = 0;
}
