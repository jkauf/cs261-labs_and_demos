#ifndef DLIST_H
#define DLIST_H
//doubly linked list
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>


struct node
{
    int data;
    node * previous;
    node * next;
};

/* These functions are already written and can be called to test out your code */
void build(node * & head);  //supplied
void display(node * head);  //supplied
void destroy(node * &head); //supplied

/* *****************YOUR TURN! ******************************** */
/* place your prototype here */
int copyToArray(node* head, int intArray[]);
void countNodes(node* aNode, int& count);
void copyHelper(node* aNode, int intArray[], int& idx, int count);
void reverseList(node*& head);
void reverseHelper(node* head, node* aNode);
void findNewHead(node*& head, node* aNode);
#endif
