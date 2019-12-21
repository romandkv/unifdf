FLAGS = -framework OpenGL -framework AppKit -Wall -Wextra -Werror
SRC = src/*.c
INC = -I includes/
LIB = -L ./minilibx_macos -l mlx $(FLAGS) -L libft/ -lft

all :
	cc  $(INC) $(SRC) $(LIB) -o fdf

clean :
	rm -rf fdf

re :clean all
