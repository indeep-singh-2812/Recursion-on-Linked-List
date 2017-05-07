// Example program to illustrate print elements in a linked using recursion.

//Author - Indeep Singh
//Date - 07-05-2017

#include <iostream>
#include <string>

using namespace std;

//creating structure of a node of linked list.
struct Node{
	int data;
	Node* next;
};

//creating a class to expose methods for performing operations on a linked list.
class LinkedList{
	public:
		Node* InsertAtBeginning(int, Node*); //this method takes an integer value as data for the newly created linked list and the head node pointer.
		void RecursivePrint(Node*); //this method takes head node as argument and prints the value in the linked list using recursion.
};

Node* LinkedList::InsertAtBeginning(int value, Node* head){
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
	return head;
}

void LinkedList::RecursivePrint(Node* head){
	if(head == NULL)
		return;
	cout<<head->data << " ";
	RecursivePrint(head->next);
}

int main()
{
	Node* head = NULL;
	LinkedList list;
	head = list.InsertAtBeginning(1, head);
	head = list.InsertAtBeginning(2, head);
	head = list.InsertAtBeginning(3, head);
	head = list.InsertAtBeginning(4, head);
	
	cout<<"\n List is : ";
	list.RecursivePrint(head); // linked list has  : 4	3	2	1
	
	return 0;
	
}


