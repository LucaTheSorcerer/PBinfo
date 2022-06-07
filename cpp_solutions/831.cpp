#include <iostream>
using namespace std;

int n, x[11];

void Back(int k)
{
    int i;
    if(k > n)
    {
        for(i = 1; i <= n; i++)
            cout << x[i];
        cout << '\n';
    }
    else
    {
        for(i = 0; i <= 1; i++)
        {
            x[k] = i;
            Back(k + 1);
        }
    }
}

int main()
{
    cin >> n;
    Back(1);
    return 0;
}