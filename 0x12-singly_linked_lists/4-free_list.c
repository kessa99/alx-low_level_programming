#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list
 * @head: pointer
 *
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
