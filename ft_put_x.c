#include "header.h"

static int ft_putnbr_x(int n)
{
	char *base;
	static int cmp;

	cmp = 0;
	base = "0123456789abcdef";
	if (0 <= n && n <= 16)
	{
		cmp++;
		write(1, &base[n], 1);
	}
	else if (n > 16)
	{
		ft_putnbr_x(n / 16);
		ft_putnbr_x(n % 16);
	}
	return (cmp);
}

int ft_put_x(va_list list)
{
	int n;

	n = va_arg(list, int);
	return (ft_putnbr_x(n));
}
