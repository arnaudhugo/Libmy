/*
** my_strncpy.c for  in /home/arnaud/arnaud_h/my_strncpy
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Thu Sep 28 12:08:29 2017 ARNAUD Hugo
** Last update Mon Oct  2 14:08:34 2017 ARNAUD Hugo
*/
char	*funct2(char *dest, char *src, int nb_carac, int n, int a, int b)
{
  a = n - nb_carac;
  while (b != nb_carac)
    {
      if (b > nb_carac)
	{
	  dest[b + a] = '\0';
	}
      else
	{
	  dest[b] = src[b];
	}
      b = b + 1;
    }
  return (dest);
}

char	*funct1(char *dest, char *src, int nb_carac, int n, int a, int b)
{
  if (nb_carac >= n)
    {
      nb_carac = 0;
      while (nb_carac < n)
	{
	  dest[nb_carac] = src[nb_carac];
	  nb_carac = nb_carac + 1;
	}
    }
  else
    {
      funct2(dest, src, nb_carac, n, a, b);
    }
  return (dest);
}

char	*my_strncpy(char *dest, char *src, int n)
{
  int	nb_carac;
  int	a;
  int	b;

  nb_carac = 0;
  a = 0;
  b = 0;
  while (src[nb_carac] != '\0')
    {
      nb_carac = nb_carac + 1;
    }
  funct1(dest, src, nb_carac, n , a, b);
  return (dest);
}
