#include <stdlib.h>
#include "lists.h"

listint_t *reverse_list(listint_t *head);

int is_palindrome(listint_t **head)
{
    listint_t *slow_ptr = *head, *fast_ptr = *head;
    listint_t *first_half = NULL, *second_half = NULL;
    listint_t *prev_slow_ptr = NULL;

    if (!slow_ptr || !slow_ptr->next)
        return (1);

    while (fast_ptr && fast_ptr->next)
    {
        fast_ptr = fast_ptr->next->next;

        if (!prev_slow_ptr)
        {
            first_half = slow_ptr;
            second_half = slow_ptr->next;
        }
        else
        {
            first_half = prev_slow_ptr->next;
            second_half = slow_ptr->next;
        }

        prev_slow_ptr = slow_ptr;
        slow_ptr = slow_ptr->next;
    }

    if (fast_ptr)
        slow_ptr = slow_ptr->next;

    second_half = reverse_list(second_half);

    while (first_half && second_half)
    {
        if (first_half->n != second_half->n)
            return (0);

        first_half = first_half->next;
        second_half = second_half->next;
    }

    if (first_half || second_half)
        return (0);

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
