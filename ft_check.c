#include "header.h"

int     ft_check(char c, va_list list)
{
	if(c == 'c')
	{
		ft_put_c(list);
		return (1);
	}
	else if (c == 's')
	{
		ft_put_s(list);
		return (2);
	}
	else if (c == 'd' && c == 'i')
	{
		ft_put_d(list);
		return (3);
	}
	else if (c == '%')
	{
		write(1,'%', 1);	
		return (4);
	}
	return (0);
}
