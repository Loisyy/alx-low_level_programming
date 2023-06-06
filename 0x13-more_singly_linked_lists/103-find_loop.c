#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head;
	listint_t *two = head;

	while (one != NULL && two != NULL && two->next != NULL)
	{
		one = one->next;
		two = two->next->next;

		if (one == two)
		{
			one = head;
			while (one != two)
			{
				one = one->next;
				two = two->next;
			}
			return (one);
		}
	}

	return (NULL);
}
