##
## Makefile for makefile in /home/bene_t/Semaine2/libmy_01
## 
## Made by BENE Thibaut
## Login   <bene_t@etna-alternance.net>
## 
## Started on  Fri Oct 24 17:38:07 2014 BENE Thibaut
## Last update Mon Oct 27 12:30:13 2014 BENE Thibaut
##
CC= gcc
NAME= libmy.a
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
RM= rm -f
FLAGS = -W -Wall -Werror

$(NAME):	$(OBJ)
	@ar r $(NAME) $(OBJ)
	@ranlib $(NAME)

all:	$(OBJ)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all