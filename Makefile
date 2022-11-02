NAME	= libftprintf.a

SRCS	= ft_printf.c ft_printf_char.c ft_printf_nbr_hx.c ft_printf_str.c ft_printf_nbr.c ft_printf_u_nbr.c ft_printf_p.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f 

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re