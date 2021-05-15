#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class demo
{
    public:
        int pub;
        demo()
        {
            pub = 10;
            pri = 20;
            pro = 30;
        }

    private:
        int pri;

    protected:
        int pro;

    friend void fun();

};

void fun()
{
    demo obj;
    cout << obj.pub << " \t " << obj.pri << " \t " << obj.pro << endl;
}

int main()
{
    fun();

    getch();
    return 0;
}
