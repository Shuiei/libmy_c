/*
** my_strncmp.c for my_strncmp.c in /home/bene_t/Semaine2/Jour04/bene_t/my_strncmp
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Thu Oct 23 16:51:14 2014 BENE Thibaut
** Last update Thu Oct 23 18:53:30 2014 BENE Thibaut
*/
int	my_strncmp(char *s1, char *s2, int n);

int	my_strncmp(char *s1, char *s2, int n)
{
  while (n--)
    {
      if (*s1 == 0 || *s1 != *s2)
	{
	  if (*s1 < *s2)
	    return (-1);
	  else
	    return (1);
	}
      s1++;
      s2++;
    }
  return (0);
}
