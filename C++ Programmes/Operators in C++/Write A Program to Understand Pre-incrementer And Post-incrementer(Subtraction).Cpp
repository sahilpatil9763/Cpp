#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i=0;

    i = i++ - --i + ++i - i--;
    cout << i << endl;
    return 0;
}
