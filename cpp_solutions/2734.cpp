#include <iostream>
using namespace std;

int main()
{
    int n, v[1001], i = 0, j = 0, ca;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> v[i];

    for(i = 1; i <= n; i++)
    {
        ca = v[i];
        for(j = i + 1; j <= n; j++)
            if(v[j] == ca)
            {
                for(int k = j + 1; k <= n; k++)
                    v[k-1] = v[k];
                n--;
                j--;
            }
    }

    for(i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}