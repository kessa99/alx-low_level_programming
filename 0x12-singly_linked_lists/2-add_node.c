#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node
 * @head: a pointer to the head
 * @str: the string
 * Return: NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
}
