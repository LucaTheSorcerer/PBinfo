#include <iostream>
#include <climits>
using namespace std;

int n, maxim = -INT_MAX, minim = INT_MAX, a[101], sum = 0;

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
    
	sum = maxim + minim;
    cout << sum;
    return 0;
}