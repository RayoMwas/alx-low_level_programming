#include "lists.h"
/**
 * get_nodeint_at_index - returns node at nth index
 * @head: head of node
 * @index: index of node
 *
 * Return: 0 if successful
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
