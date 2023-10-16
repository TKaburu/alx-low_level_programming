#!/bin/bash
gcc -Wall -wextra -Werror -pedantic -C -fPIC *.c
gcc -shared -o liball.so *.0
export LD_LIBRARY_PATH=.: $LD_LIBRARY_PATH
