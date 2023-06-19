#!/usr/bin/bash
gcc *.c
gcc -shared -o liball.so *.o
