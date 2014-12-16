/*
** my_strncpy.c for my_strncpy.c in /home/bene_t/Semaine2/Jour04/bene_t/my_strncpy
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Thu Oct 23 11:01:09 2014 BENE Thibaut
** Last update Fri Oct 24 18:11:09 2014 BENE Thibaut
*/
char	*my_strncpy(char *dest, char *src, int n);
int	my_strlen(char *str);

char	*my_strncpy(char *dest, char *src, int n)
{
  int i;
  int src_len;

  src_len = my_strlen(src);
  i = 0;
  for (i = 0; i < src_len && i < n; i++)
    dest[i] = src[i];
  if (src_len < n)
    {
    while (i != n)
      {
	dest[i] = '\0';
	i = i + 1;
      }
    }
  return dest;
}
