#include "dog.h"
#include <stdlib.h>


/**
 * new_dog -creating new object(dog)
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return:struct pointer @pr(properties)
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pr;

	pr = malloc(sizeof(dog_t));
	if (pr == NULL)
		return (NULL);
	pr->name = malloc(sizeof(dog_t) * _strlen(name));
	if (pr->name == NULL)
	{
		free(pr);
		return (NULL);
	}
	pr->owner = malloc(sizeof(dog_t) * _strlen(owner));
	if (pr->owner == NULL)
	{
		free(pr);
		free(pr->name);
		return (NULL);
	}
	_strcpy(pr->name, name);
	pr->age = age;
	_strcpy(pr->owner, owner);
	return (pr);
}

/**
 * _strlen - string length
 * @str: string
 * Return: @len(success)
 */

int _strlen(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;
	return (len);
}

/**
 * _strcpy -copy string @src -> @dest
 * @dest: string destination
 * @src: source string
 * Return: @dest(success)
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
