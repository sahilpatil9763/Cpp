#include<iostream>
#include<conio.h>
using namespace std;

float AreaOfCircle(float);

const float Pi = 3.14;

int main()
{
    const int No = 20;
    float R = 0.0;

    cout << "Enter Radius Of Circle : " << endl;
    cin >> R;

    cout << "\n Radius Of Circle = " << AreaOfCircle(R) << endl;

    getch();
    return 0;
}

float AreaOfCircle(float Rad)
{
    float Area = 0.0;

    Area = Rad*Rad*Pi;

    return Area;
}
