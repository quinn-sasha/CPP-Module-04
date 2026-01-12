NAME     := a.out
CC       := c++
INC_DIR  := include
CFLAGS   := -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)
RM       := rm -rf

SRC_DIR  := src
OBJ_DIR  := objs

SRCS     := $(SRC_DIR)/main.cpp \
            $(SRC_DIR)/Animal.cpp \
            $(SRC_DIR)/Dog.cpp \
            $(SRC_DIR)/Cat.cpp \
            $(SRC_DIR)/WrongAnimal.cpp \
            $(SRC_DIR)/WrongCat.cpp

OBJS     := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

valgrind: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re val
