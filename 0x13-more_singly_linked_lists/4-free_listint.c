#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node of the linked list
 * return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
