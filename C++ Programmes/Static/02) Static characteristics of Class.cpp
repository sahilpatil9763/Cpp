#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
    public:
        int j,k;
        static int i;               //declaration of static

    demo()
    {
        j = 10,k = 20;
    }

};
int demo :: i = 30;       // Definition of static variable

int main()
{
    demo obj1,obj2;

    cout << demo :: i << endl;

    cout << obj1.i << endl;
    cout << obj2.i << endl;

    cout << obj1.j << " \t " << obj1.k << endl;
    cout << obj2.j << " \t " << obj2.k << endl;

    obj1.i++;
    cout << obj1.i << endl;
    cout << obj2.i << endl;
    cout << demo :: i << endl;

    obj1.j++;

    cout << obj1.j << " \t " << obj2.j << endl;
    cout << sizeof(obj1) << " \t " << sizeof(obj2) << endl;

    getch();
    return 0;
}
