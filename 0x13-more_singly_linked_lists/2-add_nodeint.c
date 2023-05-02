#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a list
 * @head: pointer to the first node
 * @n: integer n to add in a new node
 * Return: address of the new element or if it fails NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	if (*head == NULL)
		new_n->next = NULL;
	else
		new_n->next = *head;
	new_n->n = n;
	*head = new_n;
	return (*head);
}
