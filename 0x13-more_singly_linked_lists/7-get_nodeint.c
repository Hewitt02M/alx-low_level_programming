#include "lists.h"

/**
 * get_nodeint_at_index - returns a pointer of a nth node.
 * @head: pointer to a head of a list.
 * @index: which node to fetch from a list starting at 0.
 *
 * Return: ...
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nz = 0;
	listint_t *node;

	if (!head)
		return (NULL);

	node = head;
	while (nz < index)
	{
		if (!node)
			return (NULL);
		node = node->next;
		nz++;
	}
	return (node);
}
