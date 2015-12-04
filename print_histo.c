/*
** print_histo.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 10:09:53 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 18:04:13 2015 POBA VANZI Kimberley
*/

#include "my_game.h"
#include "my_tools.h"
#include <stdlib.h>

void	print_histo(t_game **game)
{
  t_shot *tmp;

  my_putstr("\nHISTORIQUE\n");
  tmp = (*game)->game_shots;
  while (tmp != NULL)
    {
      my_putstr("Round : ");
      my_put_nbr(tmp->round);
      my_putstr("\nVous (");
      my_putstr(tmp->shot_gamer);
      my_putstr(") ");
      my_put_nbr(tmp->total_gamer);
      my_putstr(" : ");
      my_put_nbr(tmp->total_compu);
      my_putstr(" (");
      my_putstr(tmp->shot_compu);
      my_putstr(") ");
      my_putstr(" Ordinateur\n");
      tmp = tmp->next;
      my_putstr("\n---------------------------\n\n");
    }
}
