#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: pointer to the first node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nc = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nc++;
	}
	printf("%d\n", h->n);
	return (nc);
}
