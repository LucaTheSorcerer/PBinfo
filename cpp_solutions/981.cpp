#include <iostream>
using namespace std;

int main()
{
    int n, x, cnt = 0, c = 0, i = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        int ok = 1;
        while(x > 1 && ok)
        {
            if(x % 2 == 0) ok = 0;
            x /= 2;
        }

        if(ok)
        {
            c++;
            if(cnt < c) cnt = c;
        }
        else c = 0;
    }
    cout << cnt;
}