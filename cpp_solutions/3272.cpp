#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    unsigned long long suma = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        int x;
        int ogl = 0;
        cin >> x;
        while(x)
        {
            ogl = ogl*10 + x%10;
            x /= 10;
        }
        int d;
        for(d=1; d * d <= ogl; d++)
        {
            if(ogl%d==0)
                suma += d, suma += ogl/d;
            if(d*d==ogl)
                suma -= d;
        }
    }
    cout << suma;
    return 0;
}
