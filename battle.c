/*
** battle.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 30 16:07:31 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 14:09:36 2015 POBA VANZI Kimberley
*/

#include "my_game.h"
#include "my_tools.h"
#include <stdio.h>
#include <stdlib.h>

void	battle(t_game **game, char *gamer_shot, char *compu_shot, int round)
{
  t_shot *new_s;

  new_s = malloc(sizeof(t_shot));
  if (new_s != NULL)
    {
      new_s->shot_gamer = gamer_shot;
      new_s->shot_compu = compu_shot;
      new_s->round = round;
      new_s->next = 0;
      if ((*game)->version == 3)
	battle_v3(game, gamer_shot, compu_shot);
      else
	battle_v5(game, gamer_shot, compu_shot);
      new_s->total_gamer = (*game)->player_pts;
      new_s->total_compu = (*game)->comput_pts;
      (*game)->game_shots = add_item((*game)->game_shots, new_s);
    }
}
