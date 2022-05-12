#include <iostream>
using namespace std;

bool pare(int a[], int st, int dr)
{
    if(st == dr)
        return a[st] % 2 == 0;
    else
    {
        int m = (st + dr) / 2;
        return pare(a, st, m) && pare( a, m + 1, dr);
    }
}

int main()
{
    int n, a[101];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    if(pare(a,1,n))
        cout << "DA";
    else
        cout << "NU";
    return 0;
}