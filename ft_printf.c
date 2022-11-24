#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_check(const char *str, int i)
{
	if(str[i + 1] == 'c')
		return (1);
	else if(str[i + 1] == 's')
		return (2);
	else if(str[i + 1] == 'p')
		return (3);
	else if(str[i + 1] == 'd')
		return (4);
	else if(str[i + 1] == 'i')
		return (5);
	else if(str[i + 1] == 'u')
		return (6);
	else if(str[i + 1] == 'x')
		return (7);
	else if(str[i + 1] == 'X')
		return (8);
	else if(str[i + 1] == '%')
		return (9);
	else
		return (0);
}

int ft_nb_arg(const char *str)
{
	int i = 0;
	int nb = 0;
	while(str[i])
	{
		if (str[i] == '%')
		{
			if (ft_check(str, i) > 0)
			{
				printf("%d\n", ft_check(str, i));
				nb++;
				i += 2;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (nb);
}
/*
int ft_printf(const char *str, ...)
{
	va_list ..;
	int i;
	int nb_arg;

	nb_arg = ft_nb_arg(str);
	va_start(str, ..);
	while(nb_arg != 0)
	{}
	va_end;
	return (0);
}*/

int main()
{
	//ft_printf("hey toi ! %% %");
	printf("\n%d\n", ft_nb_arg("hey %d t% "));
}
