#include "lists.h"
/**
 * insert_dnodeint_at_index-insert a new node at a given position
 * @h: double pointer to a list
 * @idx: the given position to insert the new node
 * @n: the data of the new node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp1 = *h;
	unsigned int i;

	temp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp1->prev = temp;
		temp->next = temp1;
		*h = temp;
		return (temp);
	}

	for (i = 1; i < idx; i++)
	{
		if (temp1 == NULL || temp1->next == NULL)
		return (NULL);

		temp1 = temp1->next;
	}

	temp->prev = temp1;
	temp->next = temp1->next;
	temp1->next = temp;
	temp->next->prev = temp;

	return (temp);
}
