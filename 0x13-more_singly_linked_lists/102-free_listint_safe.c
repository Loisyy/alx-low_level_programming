#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * Description: looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: when the list is not looped - 0.
 * else- the number of unique nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *one = *h;
	listint_t *two = *h;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{

		return (0);
	}

	while (one != NULL && two != NULL && two->next != NULL)
	{
		one = one->next;
		two = two->next->next;

		if (one == two)
		{

			count++;
			while (two->next != one)
				listint_t *temp = two->next;
			free(two);
			two = temp;
			count++;
		}
		free(two);
		break
	}

	listint_t *temp = one;

	one = one->next
		free(temp);
	count++;
	}
	while (one != NULL)
	{

		listint_t *temp = one;

		one = one->next;
		free(temp);
		count++;
	}

	*h = NULL;

	return (count);
}
