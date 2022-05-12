#include <iostream>
using namespace std;

int n, a[101];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    bool check = true;
    
    for(int i = 1; i <= n; ++i)
        if(a[i]%a[n] != 0)
        	check = false;
        
    if(check)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
    