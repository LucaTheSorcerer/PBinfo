#include <iostream>
using namespace std;



int main(){
    int n;
    int a[501];
    cin >> n;
    
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    bool verificare = true;
    
    for(int i = 2; i <= n; ++i)
        if(a[i] < a[i-1])
        	verificare = false;

    if(verificare)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
        	