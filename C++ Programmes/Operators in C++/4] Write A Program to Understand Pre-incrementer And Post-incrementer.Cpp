#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int i = 10, j = 20, k;

    k = i-- - i++ + --j - ++i - j-- + ++i - j++;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    getch();
    return 0;
}
