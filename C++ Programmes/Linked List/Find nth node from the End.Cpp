#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* getNode(int data)
{
    Node* newNode = new Node;

    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

void find_Nth_From_Last(Node* head, int n, int* count, Node** nth_last)
{
    if(!head)
        return;

    find_Nth_From_Last(head->next, n, count, nth_last);

    *count = *count + 1;

    if(*count == n)
    {
        *nth_last = head;
    }
}

void find_Nth_From_Last_Util(Node* head, int n)
{
    Node* nth_last = NULL;
    int count = 0;

    find_Nth_From_Last(head, n, &count, &nth_last);

    if (nth_last != NULL)
    {
        cout << "Nth node from last is: ";
        cout << nth_last->data;
    }
    else
    {
        cout << "Node does not exists";
    }
}

int main()
{
     Node* head = getNode(4);
    head->next = getNode(2);
    head->next->next = getNode(1);
    head->next->next->next = getNode(5);
    head->next->next->next->next = getNode(3);

    int n = 2;

    find_Nth_From_Last_Util(head, n);

    return 0;
}
