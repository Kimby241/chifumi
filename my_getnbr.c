/*
** my_getnbr.c for FDI-DEVC Jour 05 my_getnbr in /home/kim/FDI_DEVC/jour05/pobava_k/my_getnbr
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 23 17:55:10 2015 POBA VANZI Kimberley
** Last update Fri Oct 23 18:23:41 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

int	my_getnbr(char *str)
{
  int	result;
  int	sign;

  result = 0;
  sign = 1;
  while (('-' == *str) || (*str == '+'))
    {
      if (*str == '-')
	sign = sign * (-1);
      str++;
    }
  while ((*str >= '0') && (*str <= '9'))
    {
      result = result * 10 + *str - 48;
      str++;
    }
  return (result * sign);
}
