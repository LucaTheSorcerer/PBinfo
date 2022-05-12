#include <iostream>
using namespace std;

int main()
{
    int n, cmax = 0, x;
    cin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        while(x)
        {
            if((x%10) > cmax)
                cmax = x % 10;
            x /= 10;
        }
    }
    cout << cmax+1;
    return 0;
}