#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *turtle, *here;

	if (list == NULL || list->next == NULL)
		return (0);

	turtle = list->next;
	here = list->next->next;

	while (turtle && here && here->next)
	{
		if (turtle == here)
			return (1);

		turtle = turtle->next;
		here = here->next->next;
	}

	return (0);
}
