// Problem: Given Array a[] of size n. For every i from 0 to n-1  output max(a[0],a[1],...,a[i]). //

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int mx = -19999999;
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        mx = max(mx,a[i]);
        cout << mx << endl;
    }
    getch();
    return 0;
}
