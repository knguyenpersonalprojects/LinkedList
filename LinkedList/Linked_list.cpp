#include<iostream>
#include"Linked_list.h"

void InsertNode(Linked_list** head_ref, int value)
{
	
	Linked_list *newNode = new Linked_list();

	newNode->data = value;

	newNode->next = *head_ref;

	*head_ref = newNode;


}