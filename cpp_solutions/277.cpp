#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, s = 0, i, c;
    cin >> a >> b;
    for(i = 3; i <= n; i++)
    {
        cin >> c;
        if(a<b && b > c)
            s += b;
        a = b;
        b = c;
    }
    cout << s;
}