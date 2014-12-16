/*
** my_swap.c for my_swap.c in /home/bene_t/Semaine2/Jour03/bene_t/my_swap
** 
** Made by BENE Thibaut
** Login   <bene_t@etna-alternance.net>
** 
** Started on  Wed Oct 22 11:26:28 2014 BENE Thibaut
** Last update Wed Oct 22 11:28:32 2014 BENE Thibaut
*/
void	my_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
