#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H
#include<stdio.h>
void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
#endif
