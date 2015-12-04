/*
** my_is_even.c for FDI-DEVC Jour 01 exo5 in /home/kim/FID_DEVC/jour01/pobava_k/my_is_even
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Mon Oct 19 14:24:46 2015 POBA VANZI Kimberley
** Last update Mon Oct 19 14:33:49 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

int my_is_even(int n)
{
  if ((n % 2) == 0)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
