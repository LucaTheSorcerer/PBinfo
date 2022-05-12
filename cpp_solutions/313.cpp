#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[22][22], suma1 = 0, suma2 = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j) cin >> a[i][j];
        
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        {
            if(i==j)
                suma1 += a[i][j];
        }
    
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        {
            if(i+j==n+1)
                suma2 += a[i][j];
        }
    if(suma1>suma2)
        cout << suma1-suma2;
    else
        cout << suma2-suma1;
    return 0;
}