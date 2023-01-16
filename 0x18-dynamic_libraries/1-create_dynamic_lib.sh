#!/bin/bash
touch liball.so
gcc -Wall -fPIC -c *.c
gcc -shared -o liball.so *.o
