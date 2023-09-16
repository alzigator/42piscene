#include <unistd.h>
#include <stdio.h>

int  ft_strlen(char *str)
{ 
  int  i;
  i = 0;
  while (str[i] != '\0')
  {
      *str++;
      i++;
  }
  return  i;
}

int  main()
{
  int  len;
  len = ft_strlen("I'm just Ken!");
  printf("%d", len);
}
