/*
** my_strncat.c for  in /home/arnaud/FDI-DVC1/Libmy02/libmy_02
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Oct  2 16:24:42 2017 ARNAUD Hugo
** Last update Mon Oct  2 16:40:53 2017 ARNAUD Hugo
*/
char	*my_strncat(char *dest, char *src, int n)
{
  int	s_end;
  int	d_end;
  int	i;

  s_end = 0;
  d_end = 0;
  i = 0;
  while (src[s_end] != '\0')
    {
      s_end = s_end + 1;
    }
  while (dest[d_end] != '\0')
    {
      d_end = d_end + 1;
    }
  while (n > i)
    {
      dest[d_end] = src[i];
      d_end = d_end + 1;
      i = i + 1;
    }
  return (dest);
}
