/*
** my_strcpy.c for my_strcpy.c in /home/bene_t/Semaine2/Jour04/bene_t/my_strcpy
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Thu Oct 23 09:39:30 2014 BENE Thibaut
** Last update Mon Oct 27 12:40:48 2014 BENE Thibaut
*/
char *my_strcpy(char *dest, char *src);

char *my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';

  return (dest);
}
