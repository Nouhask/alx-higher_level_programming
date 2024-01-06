#include <stdlib.h>
#include "lists.h"

listint_t *reverse_list(listint_t *head);

int is_palindrome(listint_t **head)
{
    listint_t *slow_ptr = *head, *fast_ptr = *head;

    if (!slow_ptr || !slow_ptr->next)
        return (1);

    while (fast_ptr && fast_ptr->next)
    {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }

    listint_t *rev_head = reverse_list(slow_ptr);

    while (rev_head)
    {
        if (rev_head->n != (*head)->n)
            return (0);

        rev_head = rev_head->next;
        *head = (*head)->next;
    }

    return (1);
}

listint_t *reverse_list(listint_t *head)
{
    listint_t *prev = NULL, *next = NULL;

    while (head)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }

    return (prev);
}
