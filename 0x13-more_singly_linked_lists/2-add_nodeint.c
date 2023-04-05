#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @n: string to store in the list.
 * Return: address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
