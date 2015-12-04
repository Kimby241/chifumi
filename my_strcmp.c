/*
** my_strcmp.c for FDI-DEVC Jour 04 Exo4 my_strncmp in /home/kim/FDI_DEVC/jour04/pobava_k/my_strcmp
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Thu Oct 22 15:05:04 2015 POBA VANZI Kimberley
** Last update Thu Oct 22 15:39:48 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

int	my_strcmp(char *s1, char *s2)
{
  while (*s1 != '\0')
    {
      if (*s1 == *s2)
	{
	  s1++;
	  s2++;
	}
      else if (*s1 > *s2)
	return (1);
      else if (*s2 == '\0')
	return (1);
      else
	return (-1);
    }
  if (*s2 != '\0')
    return (-1);
  return (0);
}
