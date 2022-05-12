#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    a = 1;
    b = 1;
    if(n == 1)
        cout << 1;
    else{
        cout << 1 << ' ' << 1 << ' ';
        n-=2;
        while(n > 0){
            c = a + b;
            a = b;
            b = c;
            cout << c << ' ';
            --n;
        }
    }
    return 0;
}