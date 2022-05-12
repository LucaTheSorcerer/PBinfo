#include <iostream>
using namespace std;

int main()
{
    int n, v[501], rez[11], i = 0, j = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        int elem;
        cin >> elem;
        for(j = 1; j <= elem; j++)
            cin >> v[j];
        bool crescator = true;
        for(j = 2; j <= elem; j++)
            if(v[j] < v[j-1])
                crescator = false;
        if(crescator)
            rez[i] = 1;
        else
            rez[i] = 0;
    }

    for(i = 1; i <= n; i++)
        cout << rez[i] << ' ';
    return 0;
}