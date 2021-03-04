#include<iostream>
#include<conio.h>
using namespace std;
class node
{
    public:
        int data;
        node*Next;
        node(int val)
        {
            data = val;
            Next = NULL;
        }
};

    void insertAtTail(node* &Head, int val)
    {
        node* n = new node(val);
        if(Head == NULL)
        {
            Head = n;
            return;
        }
        node* temp = Head;
        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }

