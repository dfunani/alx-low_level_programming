#include "lists.h"

/**
 * get_nodeint_at_index - remove head from lit
 * @head: list
 * @index: pos
 *
 * Return: data int
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int trav;

	trav = 0;
	while (head != NULL)
	{
		if (index == trav)
		{
			return (head);
		}
		trav++;
		head = head->next;
	}
	return (NULL);
}
