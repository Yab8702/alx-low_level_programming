#include "function_pointers.h"
#include<stdio.h>



/**
 * print_name - print name using parameter @f
 * @name: name to print
 * @f: function pointer to print @name
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
