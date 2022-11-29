#include "lists.h"

/**
 * pop_listint - remove head from lit
 * @head: list
 *
 * Return: data int
 *
 */

int pop_listint(listint_t **head)
{
	int trav;
	listint_t *temp;

	if ((*head) == NULL)
		return (0);
	temp = (*head);
	trav = (*head)->n;
	(*head) = (*head)->next;
	free(temp);
	return (trav);
}
