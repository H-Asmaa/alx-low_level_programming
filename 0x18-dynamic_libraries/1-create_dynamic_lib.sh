#!/usr/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c
gcc -shared -o liball.so *.o
