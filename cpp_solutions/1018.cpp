#include <iostream>
using namespace std;

int impare(int a[], int st, int dr)
{
    if(st == dr)
        return a[st] % 2 == 1;
    else
    {
        int m = (st + dr) / 2;
        return impare(a, st, m) + impare(a, m + 1, dr);
    }
}

int main()
{
    int n, a[1001];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    cout << impare(a, 1, n);
    return 0;
}