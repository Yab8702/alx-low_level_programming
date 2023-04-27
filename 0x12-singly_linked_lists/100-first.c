#include <stdio.h>


/**
  * _before_main - executed before main function
  * using constructors
  */

void __attribute__((constructor)) _before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
