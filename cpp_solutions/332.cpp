#include <bits/stdc++.h>
using namespace std;

int functie(int n){
    if (n==0)
        return 0;
    else
        return functie(n-1) + n * (n + 1);
}      







int main(){
    int n;
    cin >> n;
    cout << "Rezultatul este " << functie(n);
    return 0;
}