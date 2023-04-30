#include "lists.h"

/**
* find_listint_loop - Finds loop in list
* @head: Head of list
* Return: Pointer to list cycle
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);

	slow = fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (fast);
		}
	}

	return (NULL);
}
