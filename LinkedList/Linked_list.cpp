#include<iostream>
#include"Linked_list.h"

//** access the value that the pointer is pointing to
void InsertNode(Linked_list**headNode, int value)
{
	Linked_list* current;
	Linked_list* prev = nullptr;
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
		prev = current;
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
			//if the value is greater then the head
			//make the new node point to the previous Node pointing to
			while (current->next != NULL && current->data < value)
			{
				prev = current;
				current = current->next;
			}
			if (current->data < value)
			{
				newNode->next = current->next;
				current->next = newNode;
			}
			else
			{
				prev->next = newNode;
				newNode->next = current;
			}
			
			//have the pervious node point to the new Node
		}
	}
	

	
	

	

}

void DeleteNode(Linked_list** head_ref, int num)
{
	Linked_list* prev=nullptr;
	Linked_list* temp=nullptr;
	temp = *head_ref;

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

Linked_list DeleteMid(Linked_list** head_ref)
{
	int size=0;
	int mid;
	Linked_list* current, *next=nullptr, *prev=nullptr;

	current = *head_ref;
	while (current != NULL)
	{
		current = current->next;
		size++;
	}

	mid = size / 2;
	current = *head_ref;
	next = current->next;
	for (int i = 0; i < mid+1; i++)
	{
		
		if (i == mid)
		{
			prev->next = next;
			delete current;
			current = next;
		}
		else
		{
			prev = current;
			current = current->next;
			next = current->next;
		}
		// NULL 1 2 3 4 5
		//Previous Null		1	2	3
		//Current	1		2	3	4
	}	//Next		2		3	4	5
	return (**head_ref);
}

void MergeList(Linked_list** A, Linked_list** B)
{
	Linked_list* Merge = nullptr;
	Linked_list* a_ptr = *A;
	Linked_list* b_ptr = *B;
	int Num;
	while (a_ptr->next != NULL || b_ptr->next != NULL)
	{
		if (a_ptr->data <= b_ptr->data)
		{
			int Num = a_ptr->data;
			InsertNode(&Merge, Num);
			a_ptr = a_ptr->next;
		}
		else
		{
			int Num = b_ptr->data;
			InsertNode(&Merge, Num);
			b_ptr = b_ptr->next;
		}
	}
		

	PrintList(Merge);
}