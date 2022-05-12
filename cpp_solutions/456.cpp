#include <bits/stdc++.h>
using namespace std;
char c;

void caractere(int n)
{
    for(int i = 1; i <= n; ++i)
        cout << c;
}

int main()
{
    int n;
    cin >> n >> c;
    for(int i = 1; i <= n; ++i)
    {
        caractere(i);
        cout << endl;
    }
    
}