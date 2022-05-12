#include <iostream>
using namespace std;

int sum(int n)
{
    int i, cnt = 0, s = 0;
    if(n == 1 || n == 0) return 0;
    for(i = 2; i * i <= n; i++)
        if(n % i == 0) s += i;
    return s;
}

int main()
{
    int n, v[1001], i = 0, j = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> v[i];

    for(i = 1; i <= n; i++)
        for(j = i + 1; j <= n; j++)
            if(sum(v[i]) > sum(v[j]))
                swap(v[i],v[j]);

    for(i = 1; i <= n; i++)
        cout << v[i];
    return 0;
    
}