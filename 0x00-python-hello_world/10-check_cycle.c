#include "lists.h"
/**
 *check_cycle - checks whether a singly linked list has a cycle in it
 *@list:linked list to test
 *Return:0 - no cycle, 1 - cycle exists
 */
int check_cycle(listint_t *list)
{
  listint_t *hare = list, *tortoise = list;

  while (hare && tortoise && hare->next)
    {
      hare = hare->next->next;
      tortoise = tortoise->next;
      if (hare == tortoise)
	return (1);
    }
  return (0);
}
