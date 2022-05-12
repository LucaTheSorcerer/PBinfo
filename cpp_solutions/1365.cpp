#include <iostream>
using namespace std;

int main()
{
    int n, v[101], i = 0, j = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> v[i];

    for(i = 1; i <= n; i++)
        if((v[i] + v[i+1])%2==0)
            cout << (v[i] + v[i+2]) / 2 << ' ';
        else
        {
            if((v[i] + v[i+1]%2!=0))
                cout << v[i] << ' ';
        }
    return 0;
}