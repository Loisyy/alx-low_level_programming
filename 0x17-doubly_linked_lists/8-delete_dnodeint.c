#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (head == NULL || *head == NULL)
        return -1;

    dlistint_t *current_node = *head;
    unsigned int i = 0;

    while (current_node != NULL && i < index)
    {
        current_node = current_node->next;
        i++;
    }

    if (current_node == NULL)
        return -1;

    if (current_node->prev != NULL)
        current_node->prev->next = current_node->next;
    else
        *head = current_node->next;

    if (current_node->next != NULL)
        current_node->next->prev = current_node->prev;

    free(current_node);
    return 1;
}
