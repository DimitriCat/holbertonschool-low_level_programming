#include "lists.h"
/**
 * get_dnodeint_at_index - Return node at index given
 * @head: pointer to first node
 * @index: Which node to return
 * Return: Pointer to node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
