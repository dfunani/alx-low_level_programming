#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: list
 * @index: num
 *
 * Return: int
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy;
	unsigned int i;

	i = 0;
	cpy = (*head);
	if (cpy == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = cpy->next;
		free(cpy);
		return(1);
	}
	while (cpy != NULL)
	{
		if (index == i + 1)
		{
			temp = cpy->next;
			if (temp == NULL)
				return (-1);
			cpy->next = temp->next;
			free(temp);
			return (1);
		}
		cpy = cpy->next;
		i++;
	}
	return (-1);
}
