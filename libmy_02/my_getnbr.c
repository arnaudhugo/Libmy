/*
** my_getnbr.c for  in /home/arnaud/FDI-DVC1/Libmy02/libmy_02
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Oct  2 19:57:16 2017 ARNAUD Hugo
** Last update Tue Oct  3 15:10:49 2017 ARNAUD Hugo
*/
#include <unistd.h>

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

int	main()
{
  my_put_nbr(my_getnbr("42"));
  write (1, "\n", 1);
  my_put_nbr(my_getnbr("666def123"));
  write (1, "\n", 1);
  my_put_nbr(my_getnbr("-35kjb45"));
  write (1, "\n", 1);
  my_put_nbr(my_getnbr("hgvj85khb"));
  write (1, "\n", 1);
  my_put_nbr(my_getnbr("+-+4trois"));
  write (1, "\n", 1);
  my_put_nbr(my_getnbr("--1"));
  write (1, "\n", 1);
  return (0);
}
