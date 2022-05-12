#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    long long sumdiv = 0;
    cin >> n;
    for(d = 1; d * d <= n; d++)
    {
        if(n%d==0)
        {
            if(d%2==0) sumdiv += d;
            if(n/d % 2==0) sumdiv += n/d;
        }
        if(d*d == n && d%2==0)
            sumdiv -= d;
    }
    cout << sumdiv;
    return 0;
}
