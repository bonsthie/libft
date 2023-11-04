NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
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
	ft_substr.c

SRC_BONUS = ft_lstnew_bonus.c \
			ft_lstadd_front.c  \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

so: 
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRC_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJ_BONUS)

bonus: $(OBJ_BONUS) $(OBJ)
	ar rc $(NAME) $^	

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
