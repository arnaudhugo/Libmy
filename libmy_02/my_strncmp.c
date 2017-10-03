/*
** my_strncmp.c for  in /home/arnaud/FDI-DVC1/Libmy02/libmy_02
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Oct  2 14:28:22 2017 ARNAUD Hugo
** Last update Tue Oct  3 09:01:52 2017 ARNAUD Hugo
*/
int	funct1(char *s1, int n_s1, int n)
{
  int	m;

  m = 0;
  while (m < n)
    {
      n_s1 = n_s1 + *s1;
      s1 = s1 + 1;
      m = m + 1;
    }
  return (n_s1);
}

int	funct2(char *s2, int n_s2, int n)
{
  int	o;

  o = 0;
  while (o < n)
    {
      n_s2 = n_s2 + *s2;
      s2 = s2 + 1;
      o = o + 1;
    }
  return (n_s2);
}

int	my_strncmp(char *s1, char *s2, int n)
{
  int	n_s1;
  int	n_s2;

  n_s1 = 0;
  n_s2 = 0;
  funct1(s1, n_s1, n);
  funct2(s2, n_s2, n);
  if (n_s1 == n_s2)
    {
      return (0);
    }
  else if (n_s1 < n_s2)
    {
      return (-1);
    }
  else if (n_s1 > n_s2)
    {
      return (1);
    }
  else
    {
      
    }
  return (0);
}
