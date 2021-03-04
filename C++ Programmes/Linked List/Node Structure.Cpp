#include<iostream>
#include<stdio.h>
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

