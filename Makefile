CC = clang
CFLAGS = -Wall -Wextra -Werror -MMD -MP
SRC_DIR = src
OBJ_DIR = obj
HSRCS = ./include
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
DEPS = $(OBJS:.o=.d)
NAME = foo

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Linking $@"
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling $<"
	@${CC} ${CFLAGS} $< -I ${HSRCS} -o $@ -c

clean:
	@echo "Cleaning objects"
	@rm -f ${OBJS} ${DEPS}
	@rm -rf ${OBJ_DIR}

fclean: clean
	@echo "Cleaning executable"
	@rm -f ${NAME}

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
