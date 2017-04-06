#include "dlist.h"
#include <iostream>

using namespace std;

//put the implmenetation of the required functions here

int copyToArray(node* head, int intArray[])
{
	node* aNode = head;
	int count = 0;
	int idx = 0;
	countNodes(aNode, count);
	//cout << "count: " << count;
	copyHelper(aNode, intArray, idx, count);
	return count;
}

void countNodes(node* aNode, int& count)
{
	if(aNode)
	{
		//aNode = aNode->next;
		//++count;
		countNodes(aNode->next, ++count);
	}
}

void copyHelper(node* aNode, int intArray[], int& idx, int count)
{
	if(count > idx)
	{
		intArray[idx] = aNode->data;
		idx++;
		copyHelper(aNode->next, intArray, idx, count);
	}
}

void reverseList(node*& head)
{
	node* aNode = head;
	findNewHead(head, aNode);
	//aNode = head;
	reverseHelper(head, aNode);
}

void findNewHead(node*& head, node* aNode)
{
	if(aNode->next == nullptr)
	{
		head = aNode;
		return;
	}
	else
		findNewHead(head, aNode->next);
}

void reverseHelper(node* head, node* aNode)
{
	if(aNode)
	{
		node* temp = aNode->previous;
		aNode->previous = aNode->next;
		aNode->next = temp;
		reverseHelper(head, aNode->previous);
	}
}
