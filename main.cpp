#include "table.h"

#include <iostream>

using namespace std;

int main()
{
    node * root = NULL;
    build(root);
    display(root);

    /*  PLACE YOUR FUNCTION CALL HERE */
	int count = 0;
	node* newRoot = NULL;
	countNodes(root, count);
	int arr[count];
	cout << "There are: "<< copyToArray(root, arr) << " nodes" << endl;
	cout << "new array looks like: ";
	for(int i = 0; i < count; i++)
		cout << arr[i] << " ";
	cout << endl << "new tree without leaves looks like: ";
	copyNonLeaf(root, newRoot);
	display(newRoot);
    display(root);
    destroy(root);
    return 0;
}
