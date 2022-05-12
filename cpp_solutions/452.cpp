#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin >> n;
    a=n/100;
    b=(n%100)/10;
    c=(n%100)%10;
    if (a%2==1 && b%2==1 && c%2==1)
        cout << 3;
    else if ((a%2==1 && b%2==1) || (a%2==1 && c%2==1) || (c%2==1 && b%2==1))
        cout << 2 ;
        else if (a%2==1 || b%2==1 || c%2==1)
            cout << 1;
            else 
                cout << 0;
    
    return 0;
}