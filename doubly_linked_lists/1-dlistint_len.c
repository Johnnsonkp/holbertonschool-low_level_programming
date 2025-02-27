#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns num of elements in dlistint_t
 * @h: head of linked list
 * Return: number of elements in dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
