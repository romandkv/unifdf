cmake_minimum_required(VERSION 3.14)
project(untitled C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_EXE_LINKER_FLAGS "-L /Users/pshock/CLionProjects/untitled4/minilibx_macos -lmlx -framework OpenGL -framework AppKit -L /Users/pshock/CLionProjects/untitled4/pshockl -lft")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

add_executable(untitled main.c mouse.c keyboard.c action.c get_next_line.c drawing.c get_map.c gradient.c init.c list_hand.c parser.c projection.c put_lines.c rotate.c)