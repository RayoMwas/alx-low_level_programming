#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: head of node
 *
 * Return: 0 if successful
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}
