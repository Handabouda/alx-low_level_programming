#include "lists.h"

/**
 * listint_len - returns the number of elements.
 * @h: pointer to the first node
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t e = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			e++;
		h = h->next;
	}

	return (e);
}
