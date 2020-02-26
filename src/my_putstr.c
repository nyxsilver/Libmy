#include "libmy.h"

void	my_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			my_putchar(str[i]);
			i++;
		}
	}
}