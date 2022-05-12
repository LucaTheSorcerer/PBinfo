#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int a = 1;
    for(int i{1}; i <= n; ++i)
        a *= 2;
    cout << a;
    return 0;
}