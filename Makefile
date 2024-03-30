NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -mavx2
SRC = ft_atoi.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strmapi.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_putendl_fd.c \
	ft_split.c \
	ft_striteri.c \
	ft_strlcpy.c \
	ft_strncmp.c \
	ft_strcmp.c \
	ft_strtrim.c \
	ft_toupper.c \
	ft_calloc.c \
	ft_isascii.c \
	ft_itoa.c \
	ft_memcmp.c \
	ft_memset.c \
	ft_putnbr_fd.c \
	ft_strchr.c \
	ft_strjoin.c \
	ft_strlen.c \
	ft_strnstr.c \
	ft_substr.c \
	ft_swap.c \
	get_next_line.c \
	get_next_line_utils.c \
	ft_atoll.c  \
	free_strs.c \
	ft_isint.c \
	ft_strisnum.c \
	ft_isspace.c \
	ft_atoi_base.c \
	ft_strtol.c \
	inline_intern/_strlen.c\
	inline_intern/_strcmp.c\
	inline_intern/_strncmp.c\
	inline_intern/_memset.c\
	inline_intern/_memcpy.c \
	inline_intern/_memmove.c

SRC_BONUS = ft_lstnew.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_BONUS) $(OBJ)
	ar rc $(NAME) $^	
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus
