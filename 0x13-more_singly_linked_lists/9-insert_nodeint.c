#include "lists.h"

/**
 * insert_nodeint_at_index - insert
 * @head: list
 * @idx: index
 * @n: elem
 *
 * Return: ptr new node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *cpy, *node = malloc(sizeof(listint_t));

	i = 0;
	if ((*head) == NULL || node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	cpy = *head;
	while (cpy != NULL)
	{
		if (i == (idx - 1))
		{
			node->next = cpy->next;
			cpy->next = node;
			return (node);
		}
		i++;
		cpy = cpy->next;
	}
	free(cpy);

	return (NULL);
}
