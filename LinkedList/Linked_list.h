#pragma once
#include<iostream>
using namespace std;

class Linked_list
{
public:
	int data;
	Linked_list *next;
};
void InsertNode(Linked_list* head_ref, int num);
void DeleteNode(Linked_list* head_ref, int num);
void PrintList(Linked_list* head_ref);
void ReverseList(Linked_list* head_ref);
