#include <iostream>
using namespace std;

int main()
{
    int n, ogl = 0, d = 0, cnt = 0;
    cin >> n;
    while(n)
    {
        ogl = ogl * 10 + n % 10;
        n /= 10; 
    }

    for(d = 1; d * d <= ogl; d++)
    {
        if(ogl%d == 0)
            cnt += 2;
        if(d * d == ogl)
            cnt -= 1;
    }

    cout << cnt;
    return 0;
}