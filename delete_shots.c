/*
** delete_shots.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 09:00:34 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 16:20:44 2015 POBA VANZI Kimberley
*/

#include <stdlib.h>
#include "my_game.h"

t_shot *delete_shots(t_shot *shots)
{
  t_shot *tmp;
  
  while (shots != 0)
    {
      tmp = shots->next;
      free(shots);
      shots = tmp;
    }
  return (tmp);
}
