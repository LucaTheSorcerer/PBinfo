#include <iostream>
using namespace std;

bool egale(int a[], int st, int dr)
{
    if(st == dr)
        return a[st]  == a[1];
    else
    {
        int m = (st + dr) / 2;
        return egale(a, st, m) && egale(a, m + 1, dr);
    }
}

int main()
{
    int n, a[501];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    if(egale(a,1,n))
        cout << "DA";
    else
        cout << "NU";
    return 0;
}