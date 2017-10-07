/*
** my_putstr.c for  in /home/arnaud/arnaud_h/my_putstr
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Wed Sep 27 09:40:32 2017 ARNAUD Hugo
** Last update Wed Sep 27 13:14:50 2017 ARNAUD Hugo
*/
#include <unistd.h>

void		my_putstr(char *str)
{
  int		end;

  end = 0;
  while (*(str + end) != '\0')
    {
      char	str_end;

      str_end = *(str + end);
      write (1, &str_end, 1);
      end = end + 1;
    }
}
