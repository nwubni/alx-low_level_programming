#!/bin/bash

c_files=$(ls *.c)

for file in $c_files; do
    gcc -c $file
    ar rc liball.a ${file%.c}.o
done

ranlib liball.a

