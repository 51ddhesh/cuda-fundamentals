#!/bin/bash
nvcc -O3 "$1" -o out 
./out
rm -f out