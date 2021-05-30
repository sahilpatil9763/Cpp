#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
    public:
        void first(int cNo)
        {
            cNo++;
            cout << "\n cNo as int is : " << cNo;
        }


        inline void first(int iNo)                      //Not Overloaded
        {
            cout << "\n iNo as Inline is : " << iNo;
        }

};

int main()
{
    demo ojb1;
    int No = 777;

    obj1.first(No);

    getch();
    return 0;
}
