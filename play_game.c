/*
** play_game.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 30 15:45:35 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 17:12:15 2015 POBA VANZI Kimberley
*/

#include "my_game.h"
#include "my_tools.h"

void    print_round(int roud);
int	lunch_game(t_game **game, int round);

int	play_game(t_game **game)
{
  int	round;
  int	res;

  round = 1;
  while (round <= (*game)->best_of)
    {
      print_round(round);
      res = lunch_game(game, round);
      while (res == 1)
	{
	  print_eq_shots(round);
	  res = lunch_game(game, round);
	}
      while (res == -1)
	{
	  print_invalid_shot(round);
	  res = lunch_game(game, round);
	  while (res == 1)
	    {
	      print_eq_shots(round);
	      res = lunch_game(game, round);
	    }
	}
      round++;
    }
  return (1);
}

int	lunch_game(t_game **game, int round)
{
  char *gamer_shot;
  char *compu_shot;

  gamer_shot = get_gamer_shot();
  compu_shot = get_comput_shot(game);
  battle(game, gamer_shot, compu_shot, round);
  if (my_strcmp(compu_shot, gamer_shot) == 0)
    return (1);
  if (check_value(game, gamer_shot) == -1)
    return (-1);
  return (0);
}

int	check_value(t_game **game, char *gamer_shot)
{
  if ((*game)->version == 5)
    {
      if (!(my_strcmp(gamer_shot, "pierre") == 0 ||
            my_strcmp(gamer_shot, "feuille") == 0 ||
            my_strcmp(gamer_shot, "lezard") == 0 ||
            my_strcmp(gamer_shot, "spock") == 0 ||
            my_strcmp(gamer_shot, "ciseaux") == 0))
        return (-1);
    }
  else
    {
      if (!(my_strcmp(gamer_shot, "pierre") == 0 ||
            my_strcmp(gamer_shot, "feuille") == 0 ||
            my_strcmp(gamer_shot, "ciseaux") == 0))
        return (-1);
    }
  my_putstr("------------------------------\n\n");
  return (1);
}

void	print_round(int round)
{
  my_putstr("\nRound : ");
  my_put_nbr(round);
  my_putstr("\n");
}

void	print_eq_shots(int round)
{
  my_putstr("\033[33m");
  my_putstr("Egalité ! Rejouez le tour.\n");
  my_putstr("\033[0m");
  my_putstr("------------------------------\n\n");
  print_round(round);
}

void	print_invalid_shot(int round)
{
  my_putstr(" -\033[35m Entrée invalide. \033[0m\n\n");
  my_putstr("-------------------------------\n\n");
  print_round(round);
}
