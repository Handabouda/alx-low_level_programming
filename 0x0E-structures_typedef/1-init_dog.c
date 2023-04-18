#include "dog.h"
/**
 * init_dog - Intialize a variable of type struct dog
 * @d: pointer to struct
 * @name: pointer to name
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
