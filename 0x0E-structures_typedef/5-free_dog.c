#include "dog.h"
#include <stdlib.h>



/**
 * free_dog - free memory @object dog
 * @dog: Object dog
 */


void free_dog(dog_t *dog)
{
	if (dog != NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
}
