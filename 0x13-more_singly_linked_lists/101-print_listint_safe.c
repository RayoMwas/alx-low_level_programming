#include "lists.h"
/**
 * print_listint_safe - prints a linke list
 * @head: head of node
 *
 * Return: 0 if successful
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count;
	const listint_t *slow, *fast;

	node_count = 0;
	slow = head;
	fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			exit(98);
		}
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;
	}
	return (node_count);
}
