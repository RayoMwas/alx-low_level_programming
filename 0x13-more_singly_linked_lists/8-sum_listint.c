#include "lists.h"
/**
 * sum_listint - returns the sum of data
 * @head: head of node
 *
 * Return: 0 if successful
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
