SRCS = ft_printf.c /
	ft_put.c /

CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

OBJS = $(SRCS=.c:.o)

AR = ar rcs

RM = rm -f

all : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean : 
	$(RM) *.o

fclean : 
	$(RM) *.o $(NAME)

re : $(fclean)
	all

.PHONY : all re fclean clean


