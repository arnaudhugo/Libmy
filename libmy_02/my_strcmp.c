/*
** my_strcmp.c for  in /home/arnaud/arnaud_h/my_strcmp
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Thu Sep 28 15:26:59 2017 ARNAUD Hugo
** Last update Tue Oct  3 10:07:57 2017 ARNAUD Hugo
*/
int	my_strcmp_fonct1(char *s1, int n_s1)
{
  while (*s1 != '\0')
    {
      n_s1 = n_s1 + *s1;
      s1 = s1 + 1;
    }
  return (n_s1);
}

int	my_strcmp_fonct2(char *s2, int n_s2)
{
  while (*s2 != '\0')
    {
      n_s2 = n_s2 + *s2;
      s2 = s2 + 1;
    }
  return (n_s2);
}

int	my_strcmp(char *s1, char *s2)
{
  int	n_s1;
  int	n_s2;

  n_s1 = 0;
  n_s2 = 0;
  my_strcmp_fonct1(s1, n_s1);
  my_strcmp_fonct2(s2, n_s2);
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
