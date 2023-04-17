#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the properties of dog
 * @dog: pointing to the property of dog
 */


void print_dog(struct dog *dog)
{
	if (dog == NULL)
		return;
	if (dog->name == NULL)
		dog->name = "(nil)";
	if (dog->owner == NULL)
		dog->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", dog->name, dog->age, dog->owner);
}

