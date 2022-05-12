#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    int x;
    queue<int>Q;
    string s;
    cin >> a;
    for(int i = 1; i <= a; ++i){
        cin >> s;
        if (s == "push"){
            cin >> x;
            Q.push(x);
        }
        else if(s == "front")
            cout << Q.front() << '\n';
        else
            Q.pop();
    }
}