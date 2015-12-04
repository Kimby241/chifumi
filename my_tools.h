/*
** my_tools.h for FDI-DEVC CHIFUMI my_tools in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 30 12:45:57 2015 POBA VANZI Kimberley
** Last update Sat Oct 31 09:12:04 2015 POBA VANZI Kimberley
*/

#ifndef MY_TOOLS_H_
#define MY_TOOLS_H_
#include "my_game.h"

void	my_putstr(char *str);
int	my_getnbr(char *str);
int	my_is_even(int n);
int	my_strcmp(char *s1, char *s2);
char	*readLine();
t_shot	*add_item(t_shot *liste, t_shot *new_s);
void	my_put_nbr(int n);

#endif /* !MY_TOOLS_H_ */
