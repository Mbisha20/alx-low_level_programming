#include "lists.h"

/**
 * free_listint - to  frees the linked list
 * @head: listint_t the  list that shouald  to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
