/*
** my_put_nbr.c for my_put_nbr.c in /home/bene_t/Semaine2/Jour01/bene_t/my_put_nbr
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Mon Oct 20 17:38:46 2014 BENE Thibaut
** Last update Tue Oct 28 10:57:44 2014 BENE Thibaut
*/
void	my_putchar(char c);
void	my_putstr(char *str);

void    my_put_nbr(int nb)
{
  int   result;
  int   diviseur;

  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nb < 0)
        {
          my_putchar('-');
          nb = -nb;
        }
      diviseur = 1;
      while ((nb / diviseur) >= 10)
        diviseur = diviseur * 10;
      while (diviseur > 0)
        {
          result = (nb / diviseur) % 10;
          my_putchar(result + '0');
          diviseur = diviseur / 10;
        }
    }
}
