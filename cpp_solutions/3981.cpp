#include <iostream>
using namespace std;

int DivImpRec(int n)
{
    if(n % 2 == 1) return 1;
    int d;
    for(d = 2; d * d <= n; d++)
    {
        if(n % d == 0)
            return DivImpRec(n/d);
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << DivImpRec(n);
    return 0;
}