#include <iostream>
using namespace std;

int suma(int a[], int st, int dr)
{
    if(st == dr)
    {
        if(a[st] % 2 == 0)
            return a[st];
        else
            return 0;
    }
    else
    {
        int m = (st + dr) / 2;
        return suma(a, st, m) + suma(a, m + 1, dr);
    }
}

int main()
{
    int n, a[1001];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    cout << suma(a, 1, n);
    
    return 0;
}