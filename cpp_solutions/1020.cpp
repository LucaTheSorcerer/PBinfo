#include <iostream>
#include <cmath>
using namespace std;

int prim(int n)
{
    int d;
    if(n == 1 || n == 0) return 0;
    for(d = 2; d * d <= n; d++)
        if(n%d == 0) return 0;
    return 1;
}

int MaxPrim(int v[], int st, int dr)
{
    if(st == dr)
    {
        if(prim(v[st])) return v[st];
        else return 0;
    }
    
    int m = (st + dr)/2;
    return max(MaxPrim(v, st, m), MaxPrim(v, m+1, dr));
}

int main()
{
    int n;
    cin >> n;
    int v[n], i;

    for(i = 0; i < n; i++)
        cin >> v[i];

    cout << MaxPrim(v, 0, n-1);
    return 0;
}