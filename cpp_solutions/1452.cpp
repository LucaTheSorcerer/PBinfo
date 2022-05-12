#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int a[1502];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    for(int i = p + 1; i <= n; ++i)
        a[i-1] = a[i];
    n--;
    
    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";
    return 0;
}