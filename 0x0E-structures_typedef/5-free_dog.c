#include "dog.h"
/**
 * free_dog -frees dogs
 * @d: pointer to struct dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(dog->name);
	free(dog->owner);
	free(dog);
}
