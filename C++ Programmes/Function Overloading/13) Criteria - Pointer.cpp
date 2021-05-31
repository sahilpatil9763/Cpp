#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
    public:
        void first(int iNo)
        {
            cout << "\n iNo as int is : " << iNo;
        }

        void first(int *iNum)
        {
            cout << "\n iNum as integer pointer is : " << iNum;
        }
};

int main()
{
    demo obj;

    int i = 5;
    int &i_ref = i;

    obj.first(555);
    obj.first(i_ref);
    obj.first(i);

    getch();
    return 0;
}
