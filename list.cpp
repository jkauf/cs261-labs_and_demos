#include "list.h"
#include <iostream>

using namespace std;

void duplicate(node* head, node*& newHead)
{
	if(head)
	{
		node* aNode = new node;
		newHead = aNode;
		aNode->data = head->data;
		aNode->next = head->next;
		cout << aNode->data;
		if(head->next)
		{
			cout << " -> ";
		}
		duplicate(head->next, newHead->next);
	}

}

int removeTwo(node*& head)
{
	node* curNode = head;

	if(curNode == nullptr)
	{
		return 0;
	}

	if(curNode->data == 2)
	{
		head = head->next;
		delete curNode;
		removeTwo(head);
	}

	if(curNode->next && curNode->next->data == 2)
	{
		node* delNode = curNode->next;
		curNode->next = delNode->next;
		delete delNode;
	}

	return removeTwo(head->next);
}
