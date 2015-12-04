/*
** my_putstr.c for FDI-DEVC Jour 03 Ex1 : my_putstr in /home/kim/FID_DEVC/jour03/pobava_k/my_putstr
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Wed Oct 21 09:26:57 2015 POBA VANZI Kimberley
** Last update Wed Oct 21 09:41:36 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
