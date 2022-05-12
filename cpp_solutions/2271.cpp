#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    long long n, x, min1 = INT_MAX, min2 = INT_MAX, max1 = -INT_MAX, max2 = -INT_MAX;
    cin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        if(x > max1)
        {
            max2 = max1;
            max1 = x;
        }
        else if(x > max2) max2 = x;
        if(x < min1)
        {
            min2 = min1;
            min1 = x;
        }
        else if(x < min2) min2 = x;
    }
    if(max2 * max1 > min1 * min2) cout << max1 * max2;
    else cout << min1 * min2;
    return 0;
}
