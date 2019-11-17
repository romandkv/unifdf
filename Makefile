all :
	cc  -I includes/ src/*.c -L ./minilibx_macos -l mlx -framework OpenGL -framework AppKit -L libft/ -lft -o fdf
