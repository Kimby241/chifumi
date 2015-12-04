/*
** main.c for FDI-DEVC CHIFUMI main in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 30 11:37:07 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 18:00:50 2015 POBA VANZI Kimberley
*/

#include "my_inputs.h"
#include "my_tools.h"
#include "my_game.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
  t_game	**the_game;
  int		play;

  the_game = malloc(sizeof(*the_game));
  if (the_game == NULL)
    {
      print_err_malloc();
      return (0);
    }
  first_play(the_game, argc, argv);
  play = ask_next();
  while (play != -1)
    {
      if (play == 2)
	{
	  print_histo(the_game);
	  play = ask_next();
	}
      else
	{
	  other_games(the_game);
	  play = ask_next();
	}
    }
  return (0);
}
