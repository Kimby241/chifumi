/*
** print_res.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 09:11:27 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 18:02:36 2015 POBA VANZI Kimberley
*/

#include "my_game.h"
#include "my_tools.h"

void print_res(char *gamer, char *compu, int total_g, int total_c, int res)
{
  my_putstr("\nL'ordinateur a joué: ");
  my_putstr(compu);
  my_putstr("\nVous avez joué: ");
  my_putstr(gamer);
  my_putstr("\nVous ");
  my_put_nbr(total_g);
  my_putstr(" : ");
  my_put_nbr(total_c);
  my_putstr(" Ordinateur\n");
  if (res == 1)
    {
      my_putstr("\033[32m");
      my_putstr("Vous avez gagné la manche.\n\n");
      my_putstr("\033[0m");
    }
  if (res == -1)
    {
      my_putstr("\033[31m");
      my_putstr("Vous perdez la manche\n\n");
      my_putstr("\033[0m");
    }
}
