#include<iostream>
#include"Linked_list.h"

//** access the value that the pointer is pointing to
void InsertNode(Linked_list**headNode, int value)
{
	Linked_list* current;
	//create a new node
	Linked_list *newNode = new Linked_list();
	//if there is not element in the list make prevNode point to the first node
	newNode->data = value;
	if (*headNode == NULL)
	{
		*headNode = newNode;
	}
	else
	{
		
		//assign the data value of the new node
		
		current = *headNode;
		//if the head is greater then the value we are trying to insert
		// make it the new head and add it in front
		if (current->data > value) 
		{
			//make head point to the newely created node
			*headNode = newNode;
			//have the newly created node point to the previous head
			newNode->next = current;

		}
		else
		{
			//make the new node point to the previous Node pointing to
			while (current->next != NULL && current->data < value)
			{
				current = current->next;
			}
			newNode->next = current->next;
			//have the pervious node point to the new Node
			current->next = newNode;
		}
	}
	

	
	

	

}

void DeleteNode(Linked_list** head_ref, int num)
{
	Linked_list* prev,*temp;
	temp = *head_ref;
	prev = NULL;
	//10 20 30
	while (temp!= NULL && temp->data != num)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp->data == num)
	{
		prev->next = temp->next;
		delete temp;
	}
}

void PrintList(Linked_list *headNode)
{
	while (headNode != NULL)
	{
		cout << headNode->data << endl;
		headNode = headNode->next;
		}
}

void ReverseList(Linked_list** head_ref)
{
	Linked_list* current, *prev=NULL, *next=NULL;
	current = *head_ref;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
	PrintList(*head_ref);

	//Traverse through the linked list
	//Make the head point to the end of the list

}