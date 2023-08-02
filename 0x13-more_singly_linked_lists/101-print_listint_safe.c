#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp, *temp1;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	temp1 = (head->next)->next;

	while (temp1)
	{
		if (temp == temp1)
		{
			temp = head;
			while (temp != temp1)
			{
				nodes++;
				temp = temp->next;
				temp1 = temp1->next;
			}

			temp = temp->next;
			while (temp != temp1)
			{
				nodes++;
				temp = temp->next;
			}

			return (nodes);
		}

		temp = temp->next;
		temp1 = (temp1->next)->next;
	}

	return (0);
}

