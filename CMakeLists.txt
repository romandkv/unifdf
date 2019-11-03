cmake_minimum_required(VERSION 3.14)
project(untitled4 C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_EXE_LINKER_FLAGS "-L /Users/pshock/CLionProjects/untitled4/minilibx_macos -lmlx -framework OpenGL -framework AppKit -L /Users/pshock/CLionProjects/untitled4/pshockl -lft")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
set(SOURCES parser.c vec_handle.c put_line.c projection.c rotate.c init.c
        mem_free.c getmap.c list_hand.c strspl.c pshockg/get_next_line.c action.c events.c)

add_executable(untitled4 main.c ${SOURCES})