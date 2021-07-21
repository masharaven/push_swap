NAME = pushswap.a

SRCS =	
		write_error.c\
		iclds/libftft/_strlcat.c\
		iclds/libft/ftft_strlcpy.c\
		iclds/libft/ft_strlen.c\
		iclds/libft/ft_atoi.c\
		iclds/libft/ft_isalnum.c\
		iclds/libft/ft_isalpha.c\
		iclds/libft/ft_isascii.c\
		iclds/libft/ft_isdigit.c\
		iclds/libft/ft_isprint.c\
		iclds/libft/ft_strlcat.c\
		iclds/libft/ft_strlcpy.c\
		iclds/libft/ft_strlen.c\
		iclds/libft/ft_strncmp.c\
		iclds/libft/ft_tolower.c\
		iclds/libft/ft_toupper.c\
		iclds/libft/ft_memcpy.c\
		iclds/libft/ft_memccpy.c\
		iclds/libft/ft_bzero.c\
		iclds/libft/ft_memcmp.c\
		iclds/libft/ft_memchr.c\
		iclds/libft/ft_memmove.c\
		iclds/libft/ft_memset.c\
		iclds/libft/ft_strchr.c\
		iclds/libft/ft_strrchr.c\
		iclds/libft/ft_strnstr.c\
		iclds/libft/ft_strdup.c\
		iclds/libft/ft_calloc.c

OBJS = $(SRCS:.c=.o)

CC		=	gcc
FLAGS	=	-c -Wall -Wextra -Werror
RM		=	rm -rf
ARS		=	ar -rcs

ICLDS	=	-I./iclds

.o:.c
			gcc $(FLAGS) -c $< -o (<:.c=.o) -I .

all:	$(NAME)

$(NAME):	$(OBJS)
	$(ARS) $(NAME) $(OBJS)

clean:	
		RM $(OBJS)

fclean:	clean
		RM $(NAME)

re:
		fclean all
