#include "header.h"
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *str, ...)
{
	va_list list;
	int i;
	int cmp;
	int j;

	i = 0;
	cmp = 0;
	va_start(list, str);
	j = 0;
	while(str[i])
	{
		if(str[i] == '%')
		{
			j = ft_check(str[i + 1], list);
			if(j > 0)
			{
				i += 2;
				cmp = cmp + j;
			}
			else
				return (-1);
		}
		else
		{
			write(1, &str[i], 1);
			i++;
			cmp++;
		}
	}
	va_end(list);
	return (cmp);
}
