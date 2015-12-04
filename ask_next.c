/*
** ask_next.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 14:45:03 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 15:35:37 2015 POBA VANZI Kimberley
*/
#include "my_tools.h"

int	ask_next()
{
  char *next;

  my_putstr("\nSouhaitez vous rejouer ? [oui - non/exit - histo]\n");
  next = readLine();
  while (!((my_strcmp(next, "oui") == 0) ||
	   (my_strcmp(next, "non") == 0) ||
	   (my_strcmp(next, "exit") == 0) ||
	   (my_strcmp(next, "histo") == 0)))
    {
      my_putstr("\n\033[31mDésolé cette commande n'est pas reconnue!\033[0m\n\n");
      my_putstr("Souhaitez vous rejouer ? [oui - non/exit - histo]\n");
      next = readLine();
    }
  if (my_strcmp(next, "oui") == 0)
    return (1);
  else if (my_strcmp(next, "non") == 0)
    return (-1);
  else if (my_strcmp(next, "exit") == 0)
    return (-1);
  else if (my_strcmp(next, "histo") == 0)
    return (2);
  else
    return (0);
}
