#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n % 2 == 0)
        n /= 2;
    if(n==1)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}