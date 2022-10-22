#include "lists.h"

/**
 * list_len - finds the number of element
 * @h: the linked list_t
 * Return: The return
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}
	return (element);
}
