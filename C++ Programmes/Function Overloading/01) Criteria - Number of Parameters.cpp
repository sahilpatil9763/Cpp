#include<iostream>
#include<conio.h>
using namespace std;

class Math
{
    public:

        Math()
        {
            cout << "Inside Default Constructor" << endl;
        }

        ~Math()
        {
            cout << "\n Inside Destructor" << endl;
        }

        void Addition(int N1, int N2)
        {
            cout << "\n -> Addition is = " << N1+N2 << endl;
        }

        void Addition(int N1, int N2, int N3)
        {
            cout << "\n -> Addition is = " << N1+N2+N3 << endl;
        }
};

int main()
{
    Math Obj;

    Obj.Addition(10,20);
    Obj.Addition(10,20,30);

    cout << "\n Back To Main()..." << endl;

    getch();
    return 0;
}
