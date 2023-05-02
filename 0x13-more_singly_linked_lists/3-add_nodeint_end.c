#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the node
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *tmp;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	tmp = *head;
	if (tmp == NULL)
		*head = new_n;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_n;
	}
	return (*head);
}
