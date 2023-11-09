#include "lists.h"

/**
 * dlistint_len- prints the number of elements in a linked listint_t list
 * @h: pointer to a list
 * Return: the number of nodes printed
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *current = h;

	count = 0;
	while (current != NULL)
	{
		current = current->next;
		count += 1;
	}
	return (count);
}
