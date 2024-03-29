#include "lists.h"
/**
 * list_len - counts the no. of elements in a linked list
 * @h: self referential pointer
 *
 * Return: no. of elements in a liked list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
