#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp1;
	listint_t *temp = *head;

	temp1 = malloc(sizeof(listint_t));
	if (temp1 == NULL)
		return (NULL);

	temp1->n = n;
	temp1->next = NULL;

	if (*head == NULL)
	{
		*head = temp1;
		return (temp1);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = temp1;

	return (temp1);
}
