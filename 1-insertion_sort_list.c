#include "sort.h"
/**
 * insertion_sort_list - insert
 * @list: adoklp
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *master;

    master = (*list)->next;
    while (master)
    {
        while (master->prev && master->n < master->prev->n)
        {
            master->prev->next = master->next;
            if (master->next)
                master->next->prev = master->prev;
            master->next = master->prev;
            master->prev = master->prev->prev;
            master->next->prev = master;

            if (master->prev == NULL)
                *list = master;
            else
            {
                master->prev->next = master;
            }
            print_list(*list);
        }
        master = master->next;
    }
}