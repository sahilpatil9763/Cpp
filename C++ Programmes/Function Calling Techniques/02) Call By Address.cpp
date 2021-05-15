#include<iostream>
#include<conio.h>
using namespace std;

void Address(int*);

int main()
{
    int No = 10;

    cout << "Value Before Call : " << No << endl;

    Address(&No);

    cout << "Value After Call : " << No << endl;

    getch();
    return 0;
}

void Address(int*i)
{
    cout << "Inside Function..." << endl;
    (*i)++;
}
