#include "lists.h"

/**
 * insert_nodeint_at_index - insert
 * @head: list
 * @idx: index
 * @n: elem
 *
 * Return; ptr new node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cpy, *ptr, *nnode;
	unsigned int i;

	cpy = (*head);
	ptr = (listint_t *)malloc(sizeof(listint_t));
	while (cpy != NULL)
	{
		nnode = cpy->next;
		if (idx == i)
		{
			ptr->n = n;
			ptr->next = nnode;
			cpy->next = ptr;
		}
		i++;
	       	cpy = cpy->next;
	}
	return (ptr);
}
