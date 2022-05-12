#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[51];

    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    for(int i = 1; i <= n; ++i)
    {
        int c = a[i];
        int r = sqrt(c);
        if(r * r == c)
        {
            n++;
            for(int j = n; j > i; --j)
                a[j] = a[j-1];
            a[i] = r;
            i++;
        }
    }
    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";

    return 0;
}