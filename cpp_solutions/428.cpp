#include <iostream>
using namespace std;

int main()
{
    int n, x, b, s = 0;
    cin >> b >> n;
    int p = 0, a = 1;
    while(p < n - 1)
    {
        a *= b;
        p++;
    }

    int i;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        s += x * a;
        a = a/b;
    }

    cout << s;
    return 0;
}