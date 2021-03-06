#include "lists.h"
/**
 * free_listint - Frees linked list previously made
 * @head: Pointer to first node
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
