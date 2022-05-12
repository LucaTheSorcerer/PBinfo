#include <iostream>
using namespace std;
int a[101], n, b;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(a[i]%2!=0)
            b = 1;
    }
    if(b)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}