#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 *
 * Return: 0 if successful
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count;
	listint_t *current;
	listint_t *temp;

	node_count = 0;
	current = *h;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		node_count++;
		if (temp == *h)
		{
			*h = NULL;
		}
	}
	return (node_count);
}
