#include "lists.h"

/**
 * Description:reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	const listint_t *one = head;
	const listint_t *two = head;
	size_t count = 0;

	if (head == NULL)

		return (0);

	while (one != NULL && two != NULL && two->next != NULL)
	{
		printf("[%p] %d\n", (void *)one, one->data);
		count++;

		one = one->next;
		two = two->next->next;

		if (one == two)
		{

			printf("[%p] %d\n", (void *)one, one->data);
			count++;
			exit(98);
		}
	}

	while (one != NULL)
	{
		print("[%p] %d\n", (void *)one, one->data);
		count++;
		one = one->next;
	}

	return (count);
}
