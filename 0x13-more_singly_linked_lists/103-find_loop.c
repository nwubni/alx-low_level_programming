#include "lists.h"

/**
* find_listint_loop - Finds loop in list
* @head: Head of list
* Return: Pointer to list cycle
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast;
	listint_t *slow;

	if (!head)
		return (NULL);

	fast = head->next;
	slow = head;

	while (fast != slow)
	{
		if (!fast || !fast->next)
			return (NULL);

		fast = fast->next->next;
		slow = slow->next;
	}

	return (fast);
}
