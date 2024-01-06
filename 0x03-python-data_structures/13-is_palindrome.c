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
	return (verify_pal(head, *head));
}

/**
 * verify_pal - function to check if the list is palindrome
 * @head: ptr to the beginning of the list
 * @last: ptr to the end of the list
 * Return: 0 if not palindrom else 1
 */
int verify_pal(listint_t **head, listint_t *fin)
{
	if (fin == NULL)
		return (1);
	if (verify_pal(head, fin->next) && (*head)->n == fin->n)
	{
		*head = (*head)->next;
		return (1);
	}
	return (0);
}
