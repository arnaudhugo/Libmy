/*
** my_strdup.c for  in /home/arnaud/arnaud_h/my_strdup
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Oct  2 11:44:40 2017 ARNAUD Hugo
** Last update Mon Oct  2 13:28:57 2017 ARNAUD Hugo
*/
#include <stdlib.h>

char *my_strdup(char *str)
{
  char *str_cp;
  int n;

  n = 0;
  while (str[n] != '\0')
    {
      n = n + 1;
    }
  str_cp = malloc (n * sizeof(*str));
  str_cp = str;
  return (str_cp);
}
