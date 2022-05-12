#include <iostream>
using namespace std;

int n, a[101], sum, count;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = n; i >= 1; --i)
        cout << a[i] << ' ';
    cout << '\n';
    for(int i = 1; i <= n; ++i)
    {
        if(a[i]%2==0)
        	sum += a[i];
    }
    cout << sum << '\n';
    
    sum = 0;
    for(int i = 2; i <= n; i += 2)
        sum += a[i];
    cout << sum << '\n';
    for(int i = 1; i <= n; ++i)
    {
        if(a[i]%10==0)
            count++;
    }
    cout << count << '\n';
    sum= 0;
    for(int i = 1; i <= n; i += 2)
    {
        if(a[i]%3==0)
            sum += a[i];
    }
    cout << sum;
    return 0;
}
        
        
    
        
    