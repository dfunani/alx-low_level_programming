#include "lists.h"

/**
 * free_listint2 - list to fre
 * @head: list head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *trav;

	if ((*head) == NULL)
	{
		return;
	}
	while ((*head) != NULL)
	{
		trav = *head;
		*head = (*head)->next;
		free(trav);
	}
}
