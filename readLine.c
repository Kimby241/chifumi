/*
** readLine.c for FDI-DEVC CHIFUMI readLine in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 30 11:31:36 2015 POBA VANZI Kimberley
** Last update Fri Oct 30 16:10:50 2015 POBA VANZI Kimberley
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "my_inputs.h"

/*
** Récupère les entrées sur le terminal
*/
char		*readLine()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
