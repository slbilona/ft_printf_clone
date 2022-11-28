#include "header.h"

int     ft_check(char c, va_list list)
{
	if(c == 'c')
		return (ft_put_c(list));
	else if (c == 's')
		return (ft_put_s(list));
	else if (c == 'd' || c == 'i')
		return(ft_put_d(list));
	else if (c == 'u')
		return (ft_put_u(list));
	else if (c == '%')
	{
		write(1,"%", 1);	
		return (1);
	}
	return (0);
}
