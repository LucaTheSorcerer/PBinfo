#include <iostream>
using namespace std;

int main()
{
    int n, p, a, b, c, d = 1000000, cnt = 0;
    cin >> n;
    while(n)
    {
        cin >> a >> b;
        if(a < b)
        {
            c = a;
            a = b;
            b = c;
        }
        cnt++;
        if((a-b) <= d)
            p = cnt, d = a - b;
            n--;
    }
    cout << p;
    return 0;
}