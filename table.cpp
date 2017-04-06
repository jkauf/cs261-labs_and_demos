#include "table.h"

//Please put the impelementation of the required functions here

void countNodes(node* root, int& count)
{
	count++;
	if(root->left)
		countNodes(root->left, count);
	if(root->right)
		countNodes(root->right, count);
}

int copyToArray(node* root, int intArray[])
{
	int count = 0;
	copyToArrayHelper(root, intArray, count);
	return count;
}

void copyToArrayHelper(node* root, int intArray[], int& idx)
{
	if(root->left)
		copyToArrayHelper(root->left, intArray, idx);
	
	intArray[idx] = root->data;
	idx++;
	if(root->right)
		copyToArrayHelper(root->right, intArray, idx);
}

void copyNonLeaf(node* root, node*& newRoot)
{
	if(root == NULL)
		newRoot = NULL;
	else if(root->left == NULL && root->right == NULL)
		newRoot = NULL;
	else
	{
		newRoot = new node;
		newRoot->data = root->data;
		//cout << newRoot->data << " ";
		copyNonLeaf(root->left, newRoot->left);
		copyNonLeaf(root->right, newRoot->right);
	}
}
