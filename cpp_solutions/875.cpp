#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
    int c, x;
    string o;
    cin >> c;
    for(int i = 1; i <= c; ++i)
    {
        cin >> o;
        if(o == "push")
        {
            cin >> x;
            s.push(x);
        }
        else if(o == "top")
            cout << s.top() << '\n';
        else
            s.pop();
    }
}