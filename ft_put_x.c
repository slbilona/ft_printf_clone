#include "header.h"

static int ft_putnbr_x(int n)
{
	char *base;
	int i;

	i = 0;
	base = "0123456789abcdef";
	if (0 <= n && n <= 16)
	{
		ft_putchar(base[n]);
	}
	else if (n > 16)
	{
		ft_putnbr_x(n / 16);
		ft_putnbr_x(n % 16);
	}
	return (i);
}

int ft_put_x(va_list list)
{
	int n;

	n = va_arg(list, int);
	return (ft_putnbr_x(n));
}
