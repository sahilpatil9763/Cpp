#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char arr[100] = "apple";
    int i=0;

    while(arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }
    getch();
    return 0;
}
