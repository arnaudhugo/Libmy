/*
** my_putchar.c for  in /home/arnaud/arnaud_h/my_putchar
** 
** Made by ARNAUD Hugo
** Login   <arnaud_h@etna-alternance.net>
** 
** Started on  Mon Sep 25 11:53:26 2017 ARNAUD Hugo
** Last update Mon Sep 25 11:53:31 2017 ARNAUD Hugo
*/
#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
