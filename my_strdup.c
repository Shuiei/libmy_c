/*
** my_strdup.c for my_strdup.c in /home/bene_t/Semaine3/Jour1/bene_t/my_strdup
**
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
**
** Started on  Mon Oct 27 12:09:32 2014 BENE Thibaut
** Last update Mon Oct 27 17:32:38 2014 BENE Thibaut
*/
#include <stdlib.h>

char    *my_strcpy(char *dest, char *src);
void    my_putstr(char *str);
int	my_strlen(char *str);

char *my_strdup(char *str)
{
  char *cp;

  cp = malloc(sizeof(char *) * my_strlen(str) + 1);
  if (cp != NULL)
    cp = my_strcpy(cp, str);
  return cp;
}
