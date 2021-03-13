#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    public:
        int a,b;

        Base()
        {
            cout << "\n Base :: Constructor..." << endl;
        }
        ~Base()
        {
            cout << "\n Base :: Destructor..." << endl;
        }

    private:
        int i,j;

    protected:
        int k,l;
};

class Derived: public Base
{
    public:
        int x;

        Derived()
        {
                x = y = z = 0;

            cout << "\n Derived :: Constructor..." << endl;
        }

        ~Derived()
        {
            cout << "\n Derived :: Destructor..." << endl;
        }

    private:
        int y;

    protected:
        int z;
};

int main()
{
    Derived dObj;

    dObj.a = 21;
    dObj.b = 51;

    //dObj.i = 55;           // Not Allowed - Because Private
    //dObj.j = 60;           // Not Allowed - Because Private

    //dObj.k = 100;          // Not Allowed - Because Protected
    //dObj.l = 101;          // Not Allowed - Because Protected

    dObj.x = 5;
    //dObj.y = 10;           // Not Allowed - Because Private
    //dObj.z = 15;           // Not Allowed - Because Protected

    cout << "\n Values =>" << dObj.a << " " << dObj.b << " " << dobj.x << endl;

    cout << "\n Size Of Given Object = " << sizeof(dObj);                        // 36 => As Size Of object = Summation of Sizes of all Non Static Characteristics of Non Static characteristics of Base as well as derived
                                                                                 //    i.e. a,b,i,j,k,l => inside Base class 6 int Characteristics = 6*4 =24 Bytes

getch();
return 0;

}                                                                                //    And x,y,z => Inside Derived class 3 int Characteristics = 3*4 = 12 Bytes

