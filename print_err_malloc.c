/*
** print_err_malloc.c for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 31 16:32:28 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 16:33:16 2015 POBA VANZI Kimberley
*/

#include "my_tools.h"

void	print_err_malloc()
{
  my_putstr("\033[31m");
  my_putstr("Une erreur est survenue pendant le lancement de l'application.\n");
  my_putstr("Veuillez recommencer\n");
  my_putstr("\033[0m");
}
