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

        void first(int &iNum)
        {
            cout << "\n iNum as int is : " << iNum;
        }
};

int main()
{
    demo obj;

    cout << sizeof(obj);

    int i = 5;
    int &i_ref = i;

    obj.first(555);
    obj.first(i_ref);           //Reference is AMBIGUOUS and Declaration is not allowed
    obj.first(i);

    getch();
    return 0;
}
