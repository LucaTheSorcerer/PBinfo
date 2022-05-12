#include <iostream>
using namespace std;

int main()
{
    int n, d = 0;
    long long sumdiv = 0;
    cin >> n;
    
    for(d = 1; d * d <= n; d++)
        if(n % d == 0)
        {
            if(d%2==1)
                sumdiv += d;
            if( d * d != n && ((n/d)%2 == 1))
                sumdiv += n/d;
        }

    cout << sumdiv;
    return 0;   
}