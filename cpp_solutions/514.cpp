#include <bits/stdc++.h>
using namespace std;


int main()
{
   int n, i, j;
   cin >> n;
   int a[1001];

   for(i = 1; i <= n; ++i)
    cin >> a[i];

   for(i = 1; i < n - 1; ++i)
    for(j = i + 1; j <= n - 1; ++j)
        if(a[i] < a[j])
            swap(a[i],a[j]);

    for(i = 1; i < n; ++i)
    {
        int x = a[i];
        int y = a[n];
        while(y)
        {
            int r = x % y;
            x = y;
            y = r;
        }
        if(x==1)
            cout << a[i] << ' ';
    }
    return 0;
}
    