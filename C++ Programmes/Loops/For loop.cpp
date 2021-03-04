// Counter Statement Using For Loop

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int Sum = 0;

    for(int Counter = 1; Counter <= n; Counter ++)
    {
        Sum = Sum + Counter;
    }

    cout << Sum << endl;
    return 0;
}
