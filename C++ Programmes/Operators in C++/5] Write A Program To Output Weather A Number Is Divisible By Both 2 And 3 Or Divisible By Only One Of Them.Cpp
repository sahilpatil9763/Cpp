#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int i = 1;
    int j = 2;
    int k;

    k = 1+j + i++ + j++ + ++i + ++j;

    cout << i << " " << j << " " << " " << k << endl;

    getch();
    return 0;
}
