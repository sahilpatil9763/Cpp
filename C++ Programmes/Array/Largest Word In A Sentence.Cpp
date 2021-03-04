#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

void solve()
{
    char arr[100] = "Apple";

    int n;
    cin >> n;
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen = 0;
    int maxLen = 0;
    int st = 0, maxSt = 0;
    while(i<n)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(currLen > maxLen)
            {
                maxSt = st;
                maxLen = currLen;
            }
            st = i+1;
            currLen = 0;
        }
        else
            currLen++;

        if(arr[i] == '\0')
            break;
        i++;
    }

    cout << arr << endl;
    cout << maxLen << endl;

    for(int i=0; i<maxLen; i++)
        cout << arr[maxSt+i];
    cout << endl;
}
