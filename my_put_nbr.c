/*
** my_pu_nbr.c for FDI-DEVC Jour 05 my_put_nbr in /home/kim/FDI_DEVC/jour05/my_put_nbr
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 23 14:02:36 2015 POBA VANZI Kimberley
** Last update Sat Oct 24 18:32:32 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

void		my_putchar(char c);
void		not_null(unsigned int i, int pow, unsigned int tmp);

void		my_put_nbr(int n)
{
  unsigned int	tmp;
  int		pow;
  unsigned int	i;
  
  i = n;
  pow = 1;
  if (n < 0)
    {
      my_putchar('-');
      i = 0 - i;
      }
  tmp = i;  
  if (i == 0)
    my_putchar('0');
  else
    {
      not_null(i, pow, tmp);
    }
}

void	not_null(unsigned int i, int pow, unsigned int tmp)
{
  while (tmp > 9)
    {
      pow = pow * 10;
      tmp = tmp / 10;
    }
  while (i > 0)
    {
      my_putchar(i / pow + 48);
      i = i % pow;
      while (i == 0 && pow != 1)
	{
	  my_putchar('0');
	  pow = pow / 10;
	}
      pow = pow / 10;
    }
}
