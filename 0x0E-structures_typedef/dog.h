#ifndef DOG
#define DOG
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct dog -dog class
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 * B
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
