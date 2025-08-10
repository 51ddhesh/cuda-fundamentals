#!/bin/bash
gcc "$1" -o a -std=c23 -O3 
./a
rm -f a