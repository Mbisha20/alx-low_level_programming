#include "lists.h"

/**
 * pop_listint - which deletes the head node
 * @head: the pointer to the first
 *
 * Return: to the data inside the elements
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
