#include "lists.h"
/**
 * free_list - frees nodes
 * @head: self referencing pointer
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}
