#include "lists.h"

/**
 * insert_node - insert a num into a sorted singly linked list.
 * @head: the head of linked list.
 * @number: index to insert.
 * Return: the address of the newest node || NULL if it fail.
 */

listint_t *insert_node(listint_t **head, int number)
{
listint_t *temp, *s;
int cle;

s = malloc(sizeof(listint_t));
s->n = number;
s->next = NULL;
cle = number;

if (*head == NULL || cle < (*head)->n)
{
s->next = *head;
*head = s;
}
else
{
temp = *head;
while (temp->next != NULL && temp->next->n < cle)
temp = temp->next;
s->next = temp->next;
temp->next = s;
}

return (*head);
}
