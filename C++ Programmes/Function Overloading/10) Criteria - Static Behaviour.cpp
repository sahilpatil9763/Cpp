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

        static void first(int iNo)                      //can't  overloaded
        {
            cout << "\n iNo as Inline is : " << iNo;
        }
};

int main()
{
    demo obj;
    static demo obj1;

    obj.first(55);
    obj1.first(77);

    getch();
    return 0;
}
