#ifndef HEADER_H_
#define HEADER_H_

#include <stdarg.h>
#include <unistd.h>

int	ft_check(char c, va_list list);
void ft_put_c(va_list list);
void ft_put_s(va_list list);
void ft_put_d(va_list list);


int ft_printf(const char *str, ...);
#endif
