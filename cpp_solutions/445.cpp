#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    unsigned long long s = 0;
    cin >> n;
    int i;
    for(i = 1; i * i <= n; i++)
    {
        if(n%i==0)
        {
            s += i;
            s += n/i;
        }
        if(i*i==n)
            s -= i;
    }
    if(s%n==0)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
