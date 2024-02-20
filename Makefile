
NAME = libftprintf.a

CC = clang

MAKELIB = ar rc

FLAGS = -Wall -Werror -Wextra

HEADERFILE = ft_printf.h

SRC =		ft_printf.c		ft_printf_c.c		ft_printf_s.c	\
			ft_printf_di.c	ft_printf_u.c		ft_printf_xX.c	\
			ft_printf_p.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERFILE)
	$(MAKELIB) $(NAME) $(OBJ)
	$(CC) $(FLAGS) $(NAME) $(SRC) main.c
clean:
	@rm -rf $(OBJ) a.out
fclean: clean
	@rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re

