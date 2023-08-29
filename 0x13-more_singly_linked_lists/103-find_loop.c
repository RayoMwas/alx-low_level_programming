#include "lists.h"
/**
 * find_listint_loop - finds a loop in linked list
 * @head: head of node
 *
 * Return: 0 if successful
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
