#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at index of a
 * dlistint_t linked list
 * @head: double pointer to a list
 * @index: index of the node to be deleted
 * Return: the number of nodes printed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	i = 0;
	while (i < index)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
		i++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
