#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, x;
    int i, a[1001];
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        if(x%2==1) a[i] = 1;
        else a[i] = 0;
    }

    for(i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}