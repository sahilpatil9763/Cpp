#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    public:
            int a,b;

            Base()
            {
                a=b=i=j=k=l=0;
                cout << "\n Base :: Constructor...." << endl;
            }

            ~Base()
            {
                cout << "\n Base :: Destructor...." << endl;
            }

    private:

            int i,j;

    protected:

            int k,l;
};

class Derived : public Base
{
   public:
                int x;

                Derived()
                {
                    x=y=z=0;
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
         Base bObj;
         Derived dObj;

         dObj.a=21;
         dObj.b=51;

         //dObj.i=55;                               //Not Allowed - Because Private
         //dObj.j=60;                               //Not Allowed - Because Private

         //dObj.k=100;                              //Not Allowed - Because Protected
         //dObj.l=101;                              //Not Allowed - Because Protected

         dObj.x=5;
         //dObj.y=10;                               //Not Allowed - Because Private
         //dObj.z=15;                               //Not Allowed - Because Protected

         cout << " Values =>" << dObj.a <<" " << dObj.b << " " << dObj.x << endl;

         cout << "\n Size of Given Object =" << sizeof(dObj);

         cout << "\n Size of Given Object =" << sizeof(bObj);
         getch();

         return 0;
}
