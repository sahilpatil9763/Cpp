#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[n+1];
    cin >> arr;

    bool check = 1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
    }
    if(check == true)
        cout << "Word is a Palindrome" << endl;
    else
    {
        cout << "Word is Not A Palindrome" << endl;
    }
    getch();
    return 0;
}
