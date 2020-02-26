#include "libmy.h"

void	my_putnbr(int n)
{
	int	i;

	i = 0;
	if (n > 2147483647 || n < -2147483648)
		n = 0;
	if (n == -2147483648)
	{
		my_putchar('-');
		my_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		n = n * -1;
		my_putchar('-');
	}
	if (n >= 10)
	{
		my_putnbr(n / 10);
		my_putnbr(n % 10);
	}
	else
		my_putchar(n + '0');
}