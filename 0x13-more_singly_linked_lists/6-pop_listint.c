#include "lists.h"

/**
 * pop_listint - delete the head node and return it's value.
 * @head: pointer of a pointer to a listint_t
 *
 * Return: value of the delete node (INT)
 */
int pop_listint(listint_t **head)
{
	int nz;
	listint_t *new_head;

	if (!(*head) || !head)
		return (0);

	new_head = (*head)->next;
	nz = (*head)->n;
	free(*head);
	*head = new_head;

	return (nz);
}
