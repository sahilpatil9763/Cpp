#include<iostream>
using namespace std;

void SubarraywithGivenSum()
{
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    int i=0, j=0; int st=0.1, en=1; int sum=0;
    while(j<n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    if(sum == s)
    {
        cout << i+1 << " " << j << endl;
        return;
    }
    while(j<n)
    {
        sum += a[j];
        while(sum > s)
            sum -= a[i];
            i++;
    }
    if(sum == s)
    {
        st = i+1;
        en = j+1;

    }
    j++;

    cout << st << " " << en << endl;
}
