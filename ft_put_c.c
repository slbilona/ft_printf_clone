#include "header.h"

void ft_put_c(va_list list)
{
	int c;

	c = va_arg(list, int);
	write(1, &c, 1);
}
