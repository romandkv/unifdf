all :
	cc pshockg/*.c *.c -L ./minilibx_macos -l mlx -framework OpenGL -framework AppKit -L pshockl/ -lft
