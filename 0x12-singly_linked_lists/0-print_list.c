#include "lists.h"
/**
 * print_list - print elements of a linked list
 * @h: pointer to head first node
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t n = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		n += 1;
	}
	printf("[%d] %s\n", h->len, h->str);

	return (n);
}
