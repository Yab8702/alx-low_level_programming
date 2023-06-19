#!/bin/bash
gcc -fPIC -c  test1/*.c
gcc -shared test1/*.o -o liball.so
