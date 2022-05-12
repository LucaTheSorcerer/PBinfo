#include <iostream>
using namespace std;

int ordonat(int a[], int st, int dr)
{
    if(st == dr) 
        return 1;
    else
    {
        int m = (st + dr) / 2;
        int a1 = ordonat(a, st, m);
        int a2 = ordonat(a, m + 1, dr);
        if(a1 == a2 && a[m] <= a[m + 1])
           return 1;
        else
            return 0;
    }
}

int main()
{
    int n, a[501];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    if(ordonat(a,1,n))
        cout << "DA";
    else
        cout << "NU";
    return 0;
}