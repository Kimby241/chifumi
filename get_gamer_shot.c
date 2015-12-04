/*
** get_gamer_shot.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 30 18:30:18 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 17:58:14 2015 POBA VANZI Kimberley
*/

#include "my_game.h"
#include "my_tools.h"

char	*get_gamer_shot()
{
  char	*shot;

  my_putstr("A vous de jouer\n");
  shot = readLine();
  return (shot);
}
