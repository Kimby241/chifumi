##
## Makefile for FDI-DEVC CHIFUMI in /home/kim_etna/FDI-DEVC/CHIFUMI/pobava_k/chifumi
## 
## Made by POBA VANZI Kimberley
## Login   <pobava_k@etna-alternance.net>
## 
## Started on  Sat Oct 31 17:45:47 2015 POBA VANZI Kimberley
## Last update Sat Oct 31 17:49:42 2015 POBA VANZI Kimberley
##
CC =		gcc
NAME =		chifumi
SRC =		$(wildcard *.c)
OBJ =		$(SRC:%.c=%.o)
CFLAGS =	-W -Wall -Werror

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS)
all:		$(NAME)
all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)