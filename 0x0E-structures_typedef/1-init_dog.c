#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intialize the property of object  dog
 * @dog: point to the properies of the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */


void init_dog(struct dog *dog, char *name, float age, char *owner)
{
	if (dog == NULL)
		d = malloc(sizeof(struct dog));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
