#include "sort.h"
#include <stddef.h>
/**
 *insertion_sort_list-function to sort a doubly linked list
 *@listint_t: pointer to doubly linked list struct
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *dummy, *node, *next_node, *current, *prev;

	dummy = malloc(sizeof(listint_t));

	if (list == NULL)
		return;

	if (dummy == NULL)
		return;

	dummy->next = (*list);
	dummy->prev = NULL;
	node = (*list);

	while (node && node->next)
	{
		if (node->next->n < node->n)
		{
			prev = NULL;
			current = dummy->next;
			while (current->n < node->next->n)
			{
				prev = current;
				current = current->next;
			}
			next_node = node->next;
			node->next = next_node->next;
			next_node->next = current;
			prev->next = next_node;
		}
		else
		{
			node = node->next;
		}
	}
	(*list) = dummy->next;
	print_list(dummy->next);
}
