#include "lists.h"
/**
 * listint_len - returns no. of elements in linked list
 * @h: pointer
 *
 * Return: no. of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
