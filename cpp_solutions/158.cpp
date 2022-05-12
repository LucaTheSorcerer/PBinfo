#include <iostream>
using namespace std;

int main()
{
    int n, p, val;
    cin >> n >> val >> p;
    int a[26];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    n++;
    
    for(int i = n - 1; i >= p; i--)
        a[i+1] = a[i];
    a[p] = val;

    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";
    return 0;
}     