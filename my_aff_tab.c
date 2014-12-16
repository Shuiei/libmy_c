/*
** my_aff_tab.c for my_aff_tab.c in /home/bene_t/Semaine2/libmy_01
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Fri Oct 24 13:12:48 2014 BENE Thibaut
** Last update Mon Oct 27 11:31:57 2014 BENE Thibaut
*/
void    my_putchar(char c);
void    my_put_nbr(int n);

void    my_aff_tab(int tab[], int len)
{
  int   i;

  for (i = 0; i < len; ++i)
    {
      my_put_nbr(tab[i]);
      my_putchar('\n');
    }
}

