#include <bits/stdc++.h>
using namespace std;

int prime(int a, int b)
{
    int d, r;
    if(b==0)
        d = a;
    else
    {
        while(b!=0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        d = a;
    }
    return d;
}

int main()
{
     int n, a[201], suma = 0, count = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n; ++i)
    {
        if(prime(a[i],a[n])==1)
            count++;
    }
    cout << count;
    return 0;
}