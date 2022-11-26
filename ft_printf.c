#include "header.h"
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *str, ...)
{
	va_list list;
	int i;

	i = 0;
	va_start(list, str);
	while(str[i])
	{
		if(str[i] == '%')
		{
			if(ft_check(str[i + 1], list) > 0)
				i += 2;
			else
			{
				write(1, &str[i + 1], 1);
				i += 2;
			}
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	va_end(list);
	return (0);
}
