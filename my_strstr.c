/*
** my_strstr.c for my_strstr.c in /home/bene_t/Semaine2/libmy_01
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Fri Oct 24 13:57:03 2014 BENE Thibaut
** Last update Tue Oct 28 10:59:34 2014 BENE Thibaut
*/
int	my_strlen(char *str);
int	my_strncmp(char *s1, char *s2, int n);

char	*my_strstr(char *str, char *to_find)
{
  while (*str)
    {
      if (my_strncmp(str, to_find, my_strlen(to_find)) == 0)
	return (char*)str;

      str++;
    }

  return "null";
}
