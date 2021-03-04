#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    float n1,n2;
    int n1,n2;

    cout << "Input any two number" << endl;
    cin << n1 << n2;

    char Op;
    cout << "\n Input AN Operator" << endl;
    cin >> Op;

    switch(op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;

    case '/':
        cout << n1 / n2 << endl;
        break;

    default :
        cout << "Enter Another Operator" << endl;
        break;
    }
    getch();
    return 0;
}
