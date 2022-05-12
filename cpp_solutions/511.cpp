#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, k, a[1001];
    cin >> n >> k;
    for(i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a+k);
    for(i = 0; i < k; ++i)
        cout << a[i] << ' ';
    sort(a+k, a+n);
    for(i = n-1; i >= k; --i)
        cout << a[i] << ' ';
}