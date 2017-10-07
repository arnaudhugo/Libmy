/*
** my_getnbr.c for  in /home/arnaud/FDI-DVC1/Libmy02/libmy_02
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Oct  2 19:57:16 2017 ARNAUD Hugo
** Last update Tue Oct  3 15:13:24 2017 ARNAUD Hugo
*/
void	my_put_nbr(int n);

int	my_getnbr(char *str)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 0;
  c = 0;
  while (str[a] != '\0' && (str[a] == 43 || str[a] == 45 || (str[a] >= 48 && str[a] <= 57)))
    {
      if (str[a] >= 48 && str[a] <= 57)
	{
	  b = b * 10;
	  b = b + (str[a] - 48);
 	}
      a = a + 1;
    }
  while (str[c] != '\0')
    {
      if (str[c] == 45)
	{
	  b = b * (-1);
	}
      c = c + 1;
    }
  return (b);
}
