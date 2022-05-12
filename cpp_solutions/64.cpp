#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    long long suma = 0;
    cin >> n;
    int d;
    for(d = 1; d * d <= n; d++)
    {
        if(n%d==0)
        {
            suma += d;
            if(d*d != n)
                suma += n/d;
        }
    }
    if(suma == 2 * n)
        cout << n << " este perfect";
    else
        cout << n << " nu este perfect";

    return 0;
}
