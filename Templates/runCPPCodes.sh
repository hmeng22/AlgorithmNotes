#!/bin/sh
g++ $1 -o a.out -std=c++11 -stdlib=libc++
./a.out