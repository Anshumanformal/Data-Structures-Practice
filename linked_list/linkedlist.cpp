//Creating and travering a linked list.
#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node * next;
};

// This function prints contents of linked list 
// starting from the given node 
void printLinkedList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 

//Program which creates simple linked list with three nodes.

int main()
{
    Node *head, *second, *third = NULL;

    //Allocate three nodes in the heap.
    head = new Node();
    second = new Node();
    third = new Node();

    //Assigning data into nodes.
    head->data = 1;
    //Link first node with the second node.
    head->next = second;
    //Link second node with the third node.
    second->data = 2;
    second->next = third;
    //Terminating the third node with NULL specifying that the
    //linked list has ended.
    third->data = 3;
    third->next = NULL;

    printLinkedList(head);

    return 0;
}