#include "LinkedList.h"
#include <stdio.h>
#include <malloc.h>
#include <assert.h>

static int g_linkedListException = 0;

int GetLinkedListException()
{
	return g_linkedListException;
}

/* Defined data types */
typedef int ListDataType;

typedef struct Node_t
{
	ListDataType value;
	Node *prev;
	Node *next;

} Node;

typedef struct List_t
{
	Node *head;

} List;

/* Function implementations */
List *CreateList()
{
	List *list_p = (List *)malloc(sizeof(List));
	Node *newHead = (Node *)malloc(sizeof(Node));

	if (list_p && newHead)
	{
		list_p->head = newHead; 
		list_p->head->prev = NULL;
		list_p->head->next = NULL;

		return list_p;
	}
	else
	{
		g_linkedListException = 0x01;
		return NULL;
	}

	
}

void FreeList(List *list)
{
	if (!list || !list->head)
	{
		return;
	}
	else
	{
		Node *tempNode;

		while (list->head)
		{
			tempNode = list->head;
			list->head = list->head->next;
			free(tempNode);
		}
	}
}

size_t GetListSize(List *list)
{
	size_t listSize = 0;

	if (!list || !list->head)
	{
		g_linkedListException = 0x01;
		return listSize;
	}
	else
	{
		Node *currentNode = list->head;
		
		do
		{
			++listSize;
			GetNextNode(currentNode);

		} while (currentNode->next != list->head);
		
		return listSize;
	}
}

Node *GetListHead(List *list)
{
	return list->head;
}

Node *GetNextNode(Node *currentNode)
{
	return (currentNode->next) ? currentNode->next : NULL;
}

ListDataType GetValue(Node *node)
{
	if (node)
	{
		return node->value;
	}
	else
	{
		g_linkedListException = 0x02; // null arg
		return 0;
	}
}

Node *Insert(Node *after, ListDataType newValue)
{
	/* allocating new node and setting parameters correctly */
	Node *newNode = (Node *)malloc(sizeof(Node));

	if (newNode)
	{
		assert(newNode->value);
		newNode->value = newValue;
		newNode->next = after->next;
		newNode->prev = after;
		after->next = newNode;
		return newNode;
	}
	else
	{
		if (!newNode)
		{
			g_linkedListException = 0x01;
		}
		else
		{
			g_linkedListException = 0x02;
		}

		return NULL;
		
	}

	
}

Node *PushFront(List *list, ListDataType newValue)
{
	Node *newNode = (Node *)malloc(sizeof(Node));

	if (!list->head && newNode)
	{
		list->head = newNode;
		printf("List is empty. Adding head....");
		list->head->value = newValue;
		list->head->next = list->head;
		list->head->prev = list->head;

		return list->head;

	}
	else if (newNode)
	{
		/* Replace the position of head with new node */
		newNode->next = list->head;
		newNode->value = newValue;
		list->head->prev = newNode;
		list->head = newNode;

		return newNode;
	}
	else
	{
		g_linkedListException = 0x01;

		return NULL;
	}
}

Node *PushBack(List *list, ListDataType newValue)
{
	if (!list->head)
	{
		return PushFront(list, newValue);
	}
	else
	{
		Node *currentNode = list->head;

		while (currentNode->next != list->head)
		{
			GetNextNode(currentNode);
		}

		Node *newNode = (Node *) malloc(sizeof(newNode));
		if (newNode)
		{
			newNode->value = newValue;
			newNode->prev = currentNode;
			newNode->next = currentNode->next;
			currentNode->next = newNode;

			return newNode;
		}
		else
		{
			g_linkedListException = 0x01;
		}
	}
}

ListDataType PopFront(List *list)
{
	if (!list->head)
	{
		printf("Empty list");
		return -1;
	}
	else
	{
		Node *nextNode = list->head->next;
		nextNode->prev = NULL;
		ListDataType value = list->head->value;
		free(list->head);
		list->head = nextNode;
	
		return value;
	}
}

ListDataType PopBack(List *list)
{
	if (!list->head)
	{
		printf("Empty list");
		return 0;
	}
	else
	{
		Node *nexttoLastNode = list->head;

		/* Stop one before the last node */
		while (nexttoLastNode->next->next)
		{
			GetNextNode(nexttoLastNode);
		}

		ListDataType value = nexttoLastNode->next->value;
		free(nexttoLastNode->next);

		return value;
	}
}

void DeleteNode(List *list, Node *target)
{
	if (!list->head)
	{
		printf("Empty list");
		return;
	}
	else
	{
		Node *currentNode = list->head;

		while ((currentNode->next) && (currentNode->next != list->head))
		{
			GetNextNode(currentNode);
			if (currentNode == target)
			{
				target->prev->next = target->next;
				target->next->prev = target->prev;
				free(currentNode);
			}
		}

		printf("Value doesn't exist");

	}
}

Node *DeleteValue(List *list, ListDataType value)
{
	Node *currentNode = Find(list, value);
	if (currentNode)
	{
		currentNode->value = 0;
		return currentNode;
	}
	else
	{
		return NULL;
	}
}

Node *Find(List *list, ListDataType value)
{
	if (!list->head)
	{
		printf("Empty list");
		return NULL;
	}
	else
	{
		Node *currentNode = list->head;

		while (currentNode->next != list->head)
		{
			currentNode = GetNextNode(currentNode);

			if (currentNode->value == value)
			{
				return currentNode;
			}
		}

		printf("Value doesn't exist");

		return NULL;
	}
}

void PrintLinkedList(List *list)
{
	if (!list)
	{
		g_linkedListException = 0x01;
	}
	else if (!list->head)
	{
		g_linkedListException = 0x02;
	}
	else
	{
		Node *currentNode = list->head;
		while (currentNode->next != list->head)
		{
			printf("%d", currentNode->value);
			currentNode = GetNextNode(currentNode);
		}
	}

}