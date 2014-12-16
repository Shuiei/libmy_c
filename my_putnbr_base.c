/*
** my_putnbr_basr.c for my_putnbr_base.c in /home/bene_t/Semaine2/libmy_01/bene_t/libmy_01
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Mon Oct 27 11:24:34 2014 BENE Thibaut
** Last update Mon Oct 27 11:59:04 2014 BENE Thibaut
*/
int	my_strlen(char *str);
void	my_putchar(char c);

int	my_putnbr_base(int nb, char *base)
{
  int	a;
  int	len_str;

  if (nb == -2147483648)
    return (nb);
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  len_str = my_strlen(base);
  a = nb % len_str;
  nb = nb / len_str;
  if (nb > 0)
    my_putnbr_base(nb, base);
  my_putchar(base[a]);
  return (nb);
}
