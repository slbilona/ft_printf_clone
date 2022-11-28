#include "header.h"

int ft_put_s(va_list list)
{
	char *str;
	int i;
	int cmp;

	str = va_arg(list, char *);
	i = 0;
	cmp = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
		cmp++;
	}
	return (cmp);
}
