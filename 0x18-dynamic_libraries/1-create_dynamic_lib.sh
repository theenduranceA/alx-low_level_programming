#!/bin/bash
gcc -c -Wall -Werror -pedantic -fPIC *.c
gcc -shared -o liball.so *.o
