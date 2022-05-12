#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n, a[1001], i, j;
    cin >> n;
    for(i = 1; i <= n; i++) cin >> a[i];
    for(i = 1; i <= n; i++)
    {
        int r = sqrt(a[i]);
        if(r * r == a[i])
        {
            int minim = INT_MAX, p = 0;
            for(j = i; j <= n; j++)
            {
                int r1 = sqrt(a[j]);
                if(r1 * r1 == a[j] && a[j] < minim)
                    minim = a[j], p = j;
            }
            swap(a[i], a[p]);
        }
    }
    for(i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
    
}