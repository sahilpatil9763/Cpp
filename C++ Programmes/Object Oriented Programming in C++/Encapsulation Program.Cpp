#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

    class A
    {
        public:
            int a;
            void funcA()
            {
                cout << "Func A" << endl;
            }

        private:
            int b;
            void funcB()
            {
                cout << "Func B" << endl;
            }

        protected:
            int c;
            void funC()
            {
                cout << "Fun C" << endl;
            }
    };
    int main()
    {
        A obj;
        obj.funcA();
        //obj.funcB();
        //obj.funC();
    }


