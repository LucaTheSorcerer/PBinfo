#include <iostream>
#include <cmath>
using namespace std;
int n;
int num_imp;
int num_par;
int a[1001];

int main()
{
    
    
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(a[i]%2==0)
            num_par++;
        if(a[i]%2!=0)
            num_imp++;
    }
    cout << abs(num_par-num_imp);
    return 0;
}