#include "LinkedList.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// doesn't work, put the line to the top or do
#pragma warning(disable:4996)
#pragma warning(disable:6031)

enum OPTIONS
{
	RECREATELIST = 1, REMOVE, CLEAR, FIND, PUSHFRONT, PUSHBACK, POPFRONT, POPBACK, GETSIZE, EXIT
};

int main()
{
	int selection, input = 0;
	size_t size;
	ListDataType nodeValue;
	Node *returnNode;
	List *list = CreateList();

	do
	{
		printf("Enter selection: \n =================="
			   "\n 1 - Create List Again \n 2 - Remove \n 3 - Clear \n 4 - Find \n 5 - Pushfront \n" 
			   " 6 - Pushback \n 7 - Popfront \n 8 - Popback \n 9 - Get size \n 10 - Exit"
			   "\n ================== \nsel: ");
		scanf("%d", &selection);
		
		switch (selection)
		{
		case RECREATELIST:
			if (list)
			{
				printf("List already exists\n");
			}
			else
			{
				List *list = CreateList();
			}
		case REMOVE:
			printf("Insert value to remove from list\n");
			scanf("%d", &nodeValue);
			if (list)
			{
				DeleteValue(list, nodeValue);
			}
			else
			{
				list = CreateList();
			}
			break;
		case CLEAR:
			printf("Are you sure you want to clear entire list? Enter any number to cancel or 1 to confirm.\n");
			scanf("%d", &input);
			if (input == 1 && list)
			{
				FreeList(list);
			}
			break;
		case FIND: 
			printf("Insert value to find\n");
			scanf("%d", &nodeValue);
			if (list)
			{
				returnNode = Find(list, nodeValue);
				if (!returnNode)
				{ 
					printf("Value not found\n");
				}
				else
				{
					printf("Found!\n");
				}
			}
			else
			{
				printf("Please create a list\n");
			}
		case PUSHFRONT:
			printf("Insert value to add to list\n");
			scanf("%d", &nodeValue);
			if (list)
			{
				PushFront(list, nodeValue);
			}
			else
			{
				printf("Please create a list\n");
			}
			break;
		case PUSHBACK: 
			printf("Insert value to add to list\n");
			scanf("%d", &nodeValue);
			if (list)
			{
				PushBack(list, nodeValue);
			}
			else
			{
				printf("Please create a list\n");
			}
			break;
		case POPFRONT:
			if (list)
			{
				nodeValue = PopFront(list);
				printf("Popped: %d\n", nodeValue);
			}
			else
			{
				printf("Please create a list\n");
			}
			break;
		case POPBACK: 
			if (list)
			{
				nodeValue = PopBack(list);
				printf("Popped: %d\n", nodeValue);
			}
			else
			{
				printf("Please create a list\n");
			}
			break;
		case GETSIZE:
			if (list)
			{
				size = GetListSize(list);
				printf("Size of list: %llu\n", size);
			}
			else
			{
				printf("Please create a list\n");
			}
		case EXIT:
			break;
		default:
			printf("Selection entered not among the given options\n");
		}

	} while (selection != EXIT);
								
	free(list);


}


