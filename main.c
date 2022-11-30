#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	int i = -42;
	char c = 'a';
	char *str = "salut toi !";
	unsigned int u = -101;
	unsigned int x = 16;
	//printf("\n");
	printf("\nmon return : %d\n\n", ft_printf("mien : i = %d, c = %c, str = %s, u = %u, x = %x, X = %X, p = %p", i, c, str, u, x, x, &x));
	printf("\nvrai return : %d\n\n", printf("vrai : i = %d, c = %c, str = %s, u = %u, x = %x, X = %X, p = %p", i, c, str, u, x, x, &x));
}