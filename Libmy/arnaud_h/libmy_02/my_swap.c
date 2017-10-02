/*
** my_swap.c for  in /home/arnaud/arnaud_h/my_swap
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Wed Sep 27 11:44:31 2017 ARNAUD Hugo
** Last update Wed Sep 27 13:14:10 2017 ARNAUD Hugo
*/
void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
