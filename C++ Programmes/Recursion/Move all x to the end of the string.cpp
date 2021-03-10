#include<iostream>
#include<conio.h>
using namespace std;

string moveallx(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));

    if(ch == 'x')
    {
        return ans+ch;
    }
    return ch+ans;
}

int main()
{
    cout << moveallx("axxbdxcefxhix") << endl;

    getch();
    return 0;
}
