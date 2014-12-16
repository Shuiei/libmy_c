/*
** my_strncat.c for my_strncat.c in /home/bene_t/Semaine2/Jour04/bene_t/my_strncat
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Thu Oct 23 20:34:10 2014 BENE Thibaut
** Last update Wed Oct 29 09:20:42 2014 BENE Thibaut
*/
int	my_strlen(char *str);
char	*my_strncpy(char *dest, char *src, int n);

char	*my_strncat(char *str1, char *str2, int n)
{
  my_strncpy((str1 + my_strlen(str1)), str2, n);
  return (str1);
}
