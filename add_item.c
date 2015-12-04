/*
** add_item.c for FID-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 30 18:16:58 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 09:56:34 2015 POBA VANZI Kimberley
*/
#include "my_tools.h"
#include "my_game.h"
#include <stdlib.h>

t_shot		*add_item(t_shot *liste, t_shot *new_s)
{
  t_shot	*temp;

  if (liste == NULL)
    return new_s;
  else
    {
      temp=liste;
      while (temp->next != 0)
	temp = temp->next;
      temp->next = new_s;
      return liste;
    }
}
