#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, a = -1, b = 0;
    while(a != 0){
        cin>> a;
        if(abs(a) % 2 == 0)
            b++;
    }
    if (b == 1)
        cout<< "NU EXISTA";
    else
         cout<< b - 1;
    return 0;
}