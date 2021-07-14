#include<iostream>
#include"Linked_list.h"
using namespace std;


int main()
{
	Linked_list *head =NULL;
	Linked_list* head2 = NULL;
	
	//Inserting Nodes in the Linked List in sorted order
	InsertNode(&head, 30);
	InsertNode(&head, 40);
	InsertNode(&head, 20);
	InsertNode(&head, 10);
	InsertNode(&head, 60);
	InsertNode(&head, 4);
	InsertNode(&head, 99);
	InsertNode(&head, 380);
	InsertNode(&head, 2);
	PrintList(head);
	cout << endl;
	////Deleting Node 380
	//DeleteNode(&head, 380);
	//cout << endl;
	//PrintList(head);
	//cout << endl;
	////Reversing the linked List to display largest to smallest
	//ReverseList(&head);
	//cout << endl;
	////Deleting the mid element
	//DeleteMid(&head);
	//PrintList(head);

	//ReverseList(&head);
	//PrintList(head);
	InsertNode(&head2, 3);
	InsertNode(&head2, 5);
	InsertNode(&head2, 21);
	InsertNode(&head2, 11);
	InsertNode(&head2, 112);
	InsertNode(&head2, 1);
	InsertNode(&head2, 7);
	InsertNode(&head2, 10);
	PrintList(head2);
	cout << endl;
	MergeList(&head, &head2);
	
	system("Pause");
}