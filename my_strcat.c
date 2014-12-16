/*
** my_strcat.c for my_strcat.c in /home/bene_t/Semaine2/Jour04/bene_t/my_strcat
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Thu Oct 23 17:55:22 2014 BENE Thibaut
** Last update Mon Oct 27 11:23:24 2014 BENE Thibaut
*/
int	my_strlen(char *str);

char    *my_strcat(char *dest, char *src)
{
  int   i;
  int   j;

  j = 0;
  i = my_strlen(dest);
  while (src[j])
    dest[i++] = src[j++];
  dest[i] = '\0';
  return (dest);
}
