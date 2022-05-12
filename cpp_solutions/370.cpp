#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x, s, suma = 0, aux;
    cin >> k >> x;
    for(int i = 1; i <= x; ++i)
    {
        cin >> n;
        s = 0;
        aux = n;
        while(n != 0)
        {
            s += n % 10;
            n /= 10;
        }
        if(s%k==0)
            suma += aux;
    }
    cout << suma;
    return 0;
}