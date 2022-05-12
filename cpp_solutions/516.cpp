#include <iostream>
using namespace std;
int n, m, a[1001], check = 0, imin = -1, imax = -1, suma = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(a[i]%2==1 && check == 0)
        {
            imin = i;
            check = 1;
        }
        else if(a[i]%2 == 1)
            imax = i;
    }
    for(int i = 1; i <= n; ++i)
    {
        if(i >= imin && i <= imax)
            suma += a[i];
    }
    cout << suma;
    return 0;
}