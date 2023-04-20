#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
  * print_all - print anything
  * @format: the format of the variable
  */


void print_all(const char * const format, ...)
{
	char *str, *s = "";
	const char *ptr;
	va_list op;

	va_start(op, format);
	if (format)
	{
		ptr = format;
		while (*ptr)
		{
			switch (*ptr)
			{
				case 'c':
					printf("%s%c", s, va_arg(op, int));
					break;
				case 'i':
					printf("%s%i", s, va_arg(op, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(op, double));
					break;
				case 's':
					str = va_arg(op, char *);
					if (str == NULL)
					{
						printf("%s(nil)", s);
						break;
					}
					printf("%s%s", s, str);
					break;
				default:
					ptr++;
					continue;
			}
			s = ", ";
			ptr++;
		}
	}
	printf("\n");
	va_end(op);
}
