#!/bin/bash
gcc -c $(pwd)/*.c | ar rcs liball.a
