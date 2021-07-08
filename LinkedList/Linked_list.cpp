#include<iostream>
#include"Linked_list.h"

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
		if (current->data > value) 
		{
			*headNode = newNode;
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

void PrintList(Linked_list *headNode)
{
	while (headNode != NULL)
	{
		cout << headNode->data << endl;
		headNode = headNode->next;
		}
}