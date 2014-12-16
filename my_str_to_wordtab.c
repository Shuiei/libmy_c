/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/bene_t/Semaine3/Jour1/bene_t/my_str_to_wordtab
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Mon Oct 27 14:01:10 2014 BENE Thibaut
** Last update Mon Oct 27 20:04:54 2014 BENE Thibaut
*/
#include <stdlib.h>

char	*my_strdup(char *str);
void	my_putstr(char *str);
int	my_strlen(char *str);

int	my_count_word(char *s)
{
  int	i;
  int	cpt;

  i = 0;
  cpt = 0;
  while (s[i])
    {
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')
	  || (s[i] >= '0' && s[i] <= '9'))
	{
	  cpt = cpt + 1;
	  while (s[i] && ((s[i] >= 'a' && s[i] <= 'z')
			  || (s[i] >= 'A' && s[i] <= 'Z')
			  || (s[i] >= '0' && s[i] <= '9')))
	    i = i + 1;
	}
      i = i + 1;
    }
  return (cpt);
}

int	my_count_char(char *s, int *i)
{
  int	cpt;

  cpt = 0;
  while (s[*i] && ((s[*i] >= 'a' && s[*i] <= 'z')
		   || (s[*i] >= 'A' && s[*i] <= 'Z')
		   || (s[*i] >= '0' && s[*i] <= '9')))
    {
      cpt = cpt + 1;
      *i = *i + 1;
    }
  return (cpt);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	n;
  int	word;
  char	**tab;
  
  i = 0;
  n = 0;
  word = my_count_word(my_strdup(str));
  tab = (char **)malloc(sizeof(char *) * word + 1);
  while (str[i] && word > 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
	  || (str[i] >= '0' && str[i] <= '9'))
	{
	  tab[n] = my_strdup(str + i);
	  tab[n][my_count_char(str, &i)] = '\0';
	  n = n + 1;
	  word = word - 1;
	  free(my_strdup(str + i));
	}
      i = i + 1;
    }
  tab[my_count_word(my_strdup(str))] = '\0';
  return (tab);
}
