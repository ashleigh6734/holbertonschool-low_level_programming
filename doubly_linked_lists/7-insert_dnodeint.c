#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index to insert the new node at (starting from 0)
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if insertion fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (idx == 0)
        return (add_dnodeint(h, n));

    while (temp && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || (temp->next == NULL && i + 1 != idx))
        return (NULL);

    if (temp->next == NULL) /* insert at end */
        return (add_dnodeint_end(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = temp;
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;

    return (new_node);
}

