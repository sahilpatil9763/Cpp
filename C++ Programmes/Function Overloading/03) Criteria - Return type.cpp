#include<iostream>
#include<conio.h>
using namespace std;

class Addition
{
    public:
        void Add(int No1, int No2)
        {
            cout << "\n Addition is = " << No1+No2 << endl;
        }

    /*
        int Add(int No1, int No2)         Not Allowed
        {
            int Res = 0;

            Res = No1+No2;
            return Res;
        }

    */
};

int main()
{
    Addition obj;

    obj.Add(100,50);
    //obj.Add(15,20);         Not Allowed

    getch();
    return 0;
}
