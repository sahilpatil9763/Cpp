#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
    // code
};

demo obj1;                    // Data Section

static demo obj2;             // Static segment or Data section

int main()
{
    demo obj3;                // stack section (stack frame of main)
    demo*p = new demo();

    static demo obj4;         // static segment or Data section

    return 0;
}
