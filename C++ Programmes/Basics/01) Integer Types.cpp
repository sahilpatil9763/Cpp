#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    cout << "\n Enter any Name : " << flush;
    string name;
    cin >> name ;
    cout << "\n You entered " << name << endl;

    cout << "\n Enter a Number : " << flush;
    int value;
    cin >> value;
    cout << "\n You entered " << value << endl;

    getch();
    return 0;
}
