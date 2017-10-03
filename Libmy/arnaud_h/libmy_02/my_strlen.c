/*
** my_strlen.c for  in /home/arnaud/arnaud_h/my_strlen
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Wed Sep 27 09:03:54 2017 ARNAUD Hugo
** Last update Wed Sep 27 11:43:33 2017 ARNAUD Hugo
*/
int	my_strlen(char *str)
{
  int	end;

  end = 0;
  while ( str[end] != '\0')
    {
      end = end + 1;
    }
  return (end);
}
