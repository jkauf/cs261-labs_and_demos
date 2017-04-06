#include "clist.h"
#include <iostream>
using namespace std;

void addHead(node*& head, int value)
{
	node* aNode = new node;
	node* temp = head;
	while(temp->next != head)
	{
		temp = temp->next;
	}
	temp->next = aNode;
	aNode->data = value;
	aNode->next = head;
	head = aNode;

}

void myDisplay(node* head)
{
	node* aNode = head->next;
	cout << head->data << " -> ";
	displayHelper(head, aNode);
	cout << head->data << endl;
}

void displayHelper(node* head, node* aNode)
{
	cout <<  aNode->data << " -> ";
	if(aNode->next->data != head->data)
	{
		displayHelper(head, aNode->next);
	}

}
