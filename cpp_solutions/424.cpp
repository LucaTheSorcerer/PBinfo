#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> a >> b >> n;
    if(abs(b) > n && abs(a) <= n)
        cout << a;
    else if(abs(a) <= n && abs(b) <= n)
    {
        cout << a << ' ' << b << ' ';
        while(abs(b) <= n)
        {
            c = a + b;
            a = b;
            b = c;
            if(abs(b) <= n)
                cout << b << ' ';
        }
    }
    return 0;
}