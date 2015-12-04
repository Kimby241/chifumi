/*
** my_putchar.c for FDI-DEVC Jour01 in /home/kim/FID_DEVC/jour01/pobava_k/my_putchar
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Mon Oct 19 11:53:21 2015 POBA VANZI Kimberley
** Last update Mon Oct 19 11:57:15 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
  
