#include "lists.h"

/**
 * check_cycle - this function check singly linked list if it has a cycle in it.
 * @list: pointer to the beginning of the node
 * Return: 0 if no cycle || 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
        listint_t *current, *verify;

        if (list == NULL || list->next == NULL)
                return (0);
        current = list;
        verify = current->next;

        while (current != NULL && verify->next != NULL
                        && verify->next->next != NULL)
        {
                if (current == verify)
                        return (1);
                current = current->next;
                verify = verify->next->next;
        }
        return (0);
}
