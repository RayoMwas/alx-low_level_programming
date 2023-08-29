#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a give index
 * @head: head of node
 * @idx: int
 * @n: int
 *
 * Return: 0 if successful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i;

	if (head == NULL || idx == 0)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
