#include "lists.h"

/**
 * listint_len - prints list elems
 * @h: list to print
 *
 * Return: node len
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
