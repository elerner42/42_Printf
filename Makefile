FILES = ft_printf.c \
		ft_strlib.c \
		ft_numlib.c \
		ft_type.c

OBJS = $(FILES:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc

LIB = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS) $(LIB)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(FILES) $(LIB)
	$(CC) $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re