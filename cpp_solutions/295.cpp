#include <iostream>
using namespace std;
int n, m, a[101];


int main()
{
    cin >> n;
    for(int i=1; i <= n; i++)
        cin >> a[i];
    int check  = 0;
    for(int i = 2; i < n; ++i)
    {
        if(a[i-1]%2 == a[i]%2&& a[i]%2 == a[i+1]%2)
            check = 1;
    }
    if(check)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
