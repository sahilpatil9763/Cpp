#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int i, j, rows;
    cout  << "\n Enter number of rows: ";
    cin >> rows;

    for(i = 1; i <= rows; i++)
    {
        for(j = i; j <= rows; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    getch();
    return 0;
}
