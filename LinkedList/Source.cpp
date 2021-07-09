#include<iostream>
#include"Linked_list.h"
using namespace std;


int main()
{
	Linked_list *head =NULL;

	InsertNode(&head, 30);
	InsertNode(&head, 40);
	InsertNode(&head, 20);
	InsertNode(&head, 10);
	InsertNode(&head, 60);
	InsertNode(&head, 4);
	InsertNode(&head, 99);
	InsertNode(&head, 380);
	InsertNode(&head, 1);
	
	PrintList(head);
	DeleteNode(&head, 380);
	cout << endl;
	PrintList(head);
	cout << endl;

	ReverseList(&head);

	system("Pause");
}