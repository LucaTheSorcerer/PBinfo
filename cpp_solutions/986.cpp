#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n, count = 0;
    float a[1001];
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    if(a[0] > a[n-1])
        swap(a[0], a[n-1]);
    for(int i = 0; i < n; ++i)
    {
        if(a[i] < a[0])
            count++;
        else if(a[i] > a[n-1])
            count++;
    }
    cout << count;
    return 0;
}