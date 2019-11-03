all :
	cc *.c pshockg/*.c -L ./minilibx_macos -lmlx -framework OpenGL -framework AppKit -L ./pshockl -lft
