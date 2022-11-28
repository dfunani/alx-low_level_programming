#include "lists.h"

/**
 * free_listint2 - list to fre
 * @head: list head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *trav, *cpy;

	cpy = (*head);
	while (cpy != NULL)
	{
		trav = cpy;
		cpy = cpy->next;
		free(trav);
	}
	head = NULL;
}
