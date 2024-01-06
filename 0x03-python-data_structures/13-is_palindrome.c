#include "lists.h"

/**
 * is_palindrome - function to call check_pal to see if list is palindrome
 * @head: ptr to the beginning of the list
 * Return: 0 if not palindrome else 1
 */
int is_palindrome(listint_t **head) 
{
    if (head == NULL || *head == NULL)
        return (1);
    return (aux_palind(head, *head));
}

/**
 * aux_palind - function to check if the list is palindrome
 * @head: ptr to the beginning of the list
 * @end: ptr to the end of the list
 * Return: 0 if not palindrom else 1
 */
int aux_palind(listint_t **head, listint_t *end)
{
    if (end == NULL)
        return (1);
    if (aux_palind(head, end->next) && (head)->n == end->n)
        return (1);
    return (0);
}
