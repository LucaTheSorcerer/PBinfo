#include <iostream>
using namespace std;

int n, x[51];

void Afis(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        cout << x[i] << " ";
    cout << endl;
}

void Back(int k)
{
    int i;
    for(i = x[k-1] + 1; i <= n; i++)
    {
        x[k] = i;
        if(k % 2 == 1) Afis(k);
        Back(k + 1);
    }
}

int main()
{
    cin >> n;
    Back(1);
}