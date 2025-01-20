# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Imlx
MLX_FLAGS = -Lmlx -lmlx -lXext -lX11 -lm
SRC = main.c
OBJ = $(SRC:.c=.o)
NAME = app

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLX_FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re run
mlx:
	$(MAKE) -C mlx

$(OBJ): mlx

run: all
	./$(NAME)