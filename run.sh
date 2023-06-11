#!/bin/bash

g++-12 -o a.out $@
./a.out
rm -f a.out
