#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i=1;
    int j=2;
    int k;

    k = i+j + i++ + j++ + ++i + ++j;

    cout << i << " " << j << " " << " " << k << endl;

    getch();
    return 0;
}
