#include<iostream>
#include<conio.h>
using namespace std;

int fib(int n)
{
    if(n == 0 || n == 1)                         // base condition
    {
        return n;
    }

    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin >> n;

    cout << fib(n) << endl;
    getch();
    return 0;
}
