#include "header.h"

static void ft_putnbr_u(int n)
{
	if (0 == n || (1 <= n && n <= 9))
        {
                n = n + 48;
                write(1, &n, 1);
        }
        else if (n > 9)
        {
                ft_putnbr_u(n / 10);
                ft_putnbr_u(n % 10);
        }
}

int ft_put_u(va_list list)
{
	unsigned int n;

	n = va_arg(list, unsigned int);
	ft_putnbr_u(n);
	return (ft_compte(n));
}
