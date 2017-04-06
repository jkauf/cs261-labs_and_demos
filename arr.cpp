#include "arr.h"

int sum(node* head[])
{
	node* curNode;
	int sum = 0;
	for(int i = 0; i < SIZE; i++)
	{
		curNode = head[i];
		while(curNode)
		{
			sum += curNode->data;
			curNode = curNode->next;

		}
		
	}
	delete curNode;
	return sum;
}

int removeTwo(node* head[])
{

	node* curNode;
	node* prevNode;

	for(int i = 0; i < SIZE; i++)
	{
		curNode = head[i];
		prevNode = nullptr;

		while(curNode)
		{
			if(curNode->data == 2)
			{
				if(!prevNode) //remove first node, adjust head pointer
				{
					head[i] = head[i]->next;
					delete curNode;
					curNode = head[i];
					removed++;
				}
			
				else //all other remove cases
				{
					prevNode->next = curNode->next;
					delete curNode;
					curNode = prevNode->next;
					removed++;
				}
			}
			
			else 
			{
				prevNode = curNode;
				curNode = curNode->next;
			}
		}
	}
	return removed;
}
