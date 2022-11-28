#include "lists.h"

/**
 * print_listint - prints list elems
 * @h: list to print
 *
 * Return: node len
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
	{
		return (-1);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
