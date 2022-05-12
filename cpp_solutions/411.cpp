#include <iostream>
using namespace std;

int main()
{
    int n, i, j, a, b, r, cnt = 0;
    cin >> n;
    for(i = 1; i < n; i++)
    {
        for(j = i; j <= n; j++)
        {
            a = i;
            b = j;
            while(b)
            {
                r = a%b;
                a = b;
                b = r;
            }
            if(a == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}