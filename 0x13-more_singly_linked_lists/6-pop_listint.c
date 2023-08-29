#include "lists.h"
/**
 * pop_listint - deletes head of a node
 * @head: head of node
 *
 * Return: 0 if successful
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
