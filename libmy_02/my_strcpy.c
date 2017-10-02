/*
** my_strcpy.c for  in /home/arnaud/arnaud_h/my_srcpy
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Thu Sep 28 11:34:04 2017 ARNAUD Hugo
** Last update Thu Sep 28 11:54:11 2017 ARNAUD Hugo
*/
char	*my_strcpy(char *dest, char *src)
{
  int	nb_carac;

  nb_carac = 0;
  while (src[nb_carac] != '\0')
    {
      dest[nb_carac] = src[nb_carac];
      nb_carac = nb_carac + 1;
    }
  return (dest);
}
