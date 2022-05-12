#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, a[1001];
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cout << a[n-1] << ' ' << a[n-2];
    return 0;
}
