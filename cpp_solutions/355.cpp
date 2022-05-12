#include <iostream>
#include <climits>
using namespace std;

int n;
int a[1001];
int nmin = INT_MAX;

int main()
{
    cin >> n;
    for(int i = 1; i <=n; ++i)
    {
        cin >> a[i];
    }
    
    for(int i = 1; i <= n; ++i)
    {
        
        if(a[i] < nmin)
            nmin = a[i];
        
    }
    cout << nmin;
    return 0;
}