#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age != NULL) ? d->age : "(nil)");
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
