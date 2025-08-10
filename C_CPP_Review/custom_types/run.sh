#!/bin/bash
g++ "$1" -o a -std=c++20 -O3 
./a
rm -f a