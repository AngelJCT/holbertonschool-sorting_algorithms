#include "sort.h"
#include <stddef.h>
/**
 *insertion_sort_list-function to sort a doubly linked list
 *@listint_t: pointer to doubly linked list struct
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list), *temp;

	if (list == NULL || (*list) == NULL)
		return;
	if (dlistint_len(*list) < 2)
		return;

	while (current)
	{
		while (current->next && current->n > current->next->n)
		{
			temp = current->next;
			current->next = temp->next;
			temp->prev = current->prev;

			if (current->prev != NULL)
				current->prev->next = temp;

			if (temp->next != NULL)
				temp->next->prev = current;

			current->prev = temp;
			temp->next = current;

			if (temp->prev != NULL)
				current = temp->prev;
			else
			{
				*list = temp;
			}
			print_list(*list);
		}
		current = current->next;
	}
}
/**
 *dlistint_len-function to get the length of doubly linked list
 *@head: first node
 *Return: length of list
 */
int dlistint_len(listint_t *head)
{
	int len_count = 0;

	while (head != NULL)
	{
		head = head->next;
		len_count++;
	}
	return (len_count);
}
