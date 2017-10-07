/*
** my_strcat.c for  in /home/arnaud/FDI-DVC1/Libmy02/libmy_02
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Oct  2 14:39:59 2017 ARNAUD Hugo
** Last update Mon Oct  2 15:59:10 2017 ARNAUD Hugo
*/
char	*my_strcat(char *dest, char *src)
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
  while (src[i] != '\0')
    {
      dest[d_end] = src[i];
      d_end = d_end + 1;
      i = i + 1;
    }
  return (dest);
}
