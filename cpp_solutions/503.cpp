#include <iostream>
using namespace std;
int n, a[1001];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    bool check = true;
    a[0]=0;
    for(int i = 1; i <= n; ++i)
    {
        if(a[i]==1 && a[i-1]==1)
            check = false;
    }
    if(check)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
        
        	
    
    