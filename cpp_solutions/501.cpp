#include <iostream>
using namespace std;

int a[501];
int b;

int main(){
    int n;
    cin >> n;
    
    bool egale = false;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    for(int i = 2; i <= n; ++i)
        if(a[i] != a[i-1])
            egale = true;
    
    if(egale)
        cout << "NU";
    else
        cout << "DA";

    return 0;
}

    