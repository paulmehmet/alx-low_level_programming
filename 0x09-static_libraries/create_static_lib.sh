#!/bin/bash
gcc -c -Wall -pedantic -Wextra -Werror *.c
ar -rc liball.a *.o
