#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int y;
    cin >> x >> y;
    
    if(y%x==0)
        cout << y/x;
    else
        cout << y/x+1;
    return 0;
}