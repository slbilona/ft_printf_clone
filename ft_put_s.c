#include "header.h"

void ft_put_s(va_list list)
{
	char *str;
	int i;

	str = va_arg(list, char *);
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
