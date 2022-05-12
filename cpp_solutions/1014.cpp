#include <iostream>
using namespace std;

int n, m;

long long s1 = 1, s2 = 1;

int main()
{
    cin >> n >> m;
    for(int i = m + 1; i <= n; ++i)
        s1 = s1 * i;
    for(int i = 1; i <= n - m; ++i)
        s2 = s2 * i;
    cout << s1/s2;
    return 0;
}