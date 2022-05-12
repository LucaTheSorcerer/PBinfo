#include <iostream>
using namespace std;

void rezolvare();

int main()
{
    rezolvare();
    return 0;
}

void rezolvare()
{
    unsigned long long a,b,r,d;
    int i;
    cin >> a >> b;
    if(a==0) d = b;
    else
        if(b == 0) d = a;
    else
    {
        while(b!=0)
        {
            r = a % b;
            a = b;
            b = r;
        }
    }
    d = a;
    for(i = 1; i <= d; i++)
        if(d%i==0) cout << i << " ";
}