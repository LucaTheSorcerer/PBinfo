#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int cnta = 0, cntb = 0, ca = a, cb = a;
    
    while(a)
    {
        cnta += (a % 2);
        a /= 2;
    }

    while(b)
    {
        cntb += (b % 2);
        b /= 2;
    }

    if(cnta == cntb) cout << min(ca, cb);
    else if(cnta < cntb) cout << cb;
    else cout << ca;
    return 0;
}