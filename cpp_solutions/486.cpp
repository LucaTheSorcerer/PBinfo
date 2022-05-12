#include <iostream>
#include <climits>
using namespace std;

int n, a[1001], minim = INT_MAX, maxim = -INT_MAX;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(a[i] > maxim)
            maxim = a[i];
        if(a[i] < minim)
            minim = a[i];
    }
    
    cout << minim << " " << maxim;
    return 0;
}