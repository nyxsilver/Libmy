#include "libmy.h"


//La fonction atoi() convertit le début de la chaîne pointée par *str en entier de type int .

int     my_atoi(char *str)
{
  int val;

  val = 0;
  while (*str)
    {
      if (*str >= '0' && *str <= '9')
        {
          val *= 10;
          val += *str - '0';
        }
      else
        return (val);
      str++;
    }
  return (val);
}