#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
    public:
        void first(char cNo)
        {
            cout << "\n cNo as char is : " << cNo;
        }

        void first(int iNo)
        {
            cout << "\n iNo as integer is : " << iNo;
        }

        void first(double dNo)
        {
            cout << "\n dNo as double is : " << dNo;
        }
};

int main()
{
    demo obj;

    obj.first('S');
    obj.first(15);
    obj.first((int)92.67);

    char ch = 'C';

    obj.first(ch);

    getch();
    return 0;
}
