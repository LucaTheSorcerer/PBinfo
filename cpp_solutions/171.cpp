#include <iostream>
using namespace std;

int main()
{
    int n, x, cmin = 9, nmax = 0;
    cin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        int y = x;
        while(y > 9) y /= 10;
        if(y < cmin)
        {
            cmin = y;
            nmax = x;
        }
        else if(y == cmin)
            if(x > nmax) nmax = x;
    }
    cout << nmax;
    return 0;
}