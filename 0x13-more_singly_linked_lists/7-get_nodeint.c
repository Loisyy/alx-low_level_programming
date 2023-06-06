#include "lists.h"

/**
 * Description: get_nodeint_at_index - returns the node
 * at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	return (current);
}
