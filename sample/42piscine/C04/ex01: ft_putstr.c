#include <unistd.h>
#include <stdio.h>

void  ft_putstr(char *str)
{
  int  i;
  i = 0;
  while (str[i] != '\0')
    {
      char  c;
      (1, &c, 1);
      *str++;
    }
}

int  main()
{
  ft_putstr("i'm just ken!");
  return  0;
}
