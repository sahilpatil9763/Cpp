#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;



    int n, m;
    cin >> n >> m;

    int arr[n][m]
    int(int i=0; i<n; i++)
    {
        for(intj=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is: " << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    getch();
    return 0;

