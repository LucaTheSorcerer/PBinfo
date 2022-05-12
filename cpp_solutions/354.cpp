#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max = -100000000;
    for(int i = 1; i <= n; ++i){
        int x;
        cin >> x;
        if (x > max)
            max = x;
    }
    cout << max;
    return 0;
}