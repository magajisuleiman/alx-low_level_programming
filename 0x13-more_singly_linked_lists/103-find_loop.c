#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *_slow = head;
	listint_t *_fast = head;

	if (head == NULL)
		return (NULL);

	while (_slow && _fast && _fast->next)
	{
		_fast = _fast->next->next;
		_slow = _slow->next;
		if (_fast == _slow)
		{
			_slow = head;
			while (_slow != _fast)
			{
				_slow = _slow->next;
				_fast = _fast->next;
			}
			return (_fast);
		}
	}

	return (NULL);
}

