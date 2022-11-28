#include "header.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	//int i = -42;
	//char c = 'a';
	//char *str = "hey toi !";
	//unsigned int u = 4294967295;
	int x = -2147483647;
	//printf("\n");
	printf("\nmon return : %d\n\n", ft_printf("mien : %d = %x", x, x));
	printf("\nvrai return : %d\n\n", printf("vrai : %d = %x", x, x));
}

