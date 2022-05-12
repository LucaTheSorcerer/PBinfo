#include <iostream>
using namespace std;

int main()
{
    int n, d, cnt = 0;
    cin >> n;
    for(d = 1; d * d <= n; d++)
    {
        if(n%d==0)
        {
            if(d%2==0)
                cnt++;
            if(d * d != n && ((n/d)%2==0))
                cnt++;
        }
    }

    cout << cnt;
    return 0;
}