#ifndef DOG_H
#define DOG_H
/**
 * struct dog - charcacterstic of dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
int _strlen(char *);
char *_strcpy(char *, char *);
void free_dog(dog_t *);
#endif
