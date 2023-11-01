NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

so: $(OBJ)
	$(CC) -nostartfiles -fPIC -shared $(CFLAGS) -o libft.so $(OBJ)

bonus:
	echo "no bonuses"
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
