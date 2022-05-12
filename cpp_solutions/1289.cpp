#include <iostream>
using namespace std;
int n, b, x[10], a[10];

void afisare()
{
    int i;
    for(i = 1; i <= n; i++) 
        cout << x[i]; 
    cout << '\n';
}

void Back(int k)
{
    int i;
    for(i = 1; i <= 4; i++)
    {
        x[k] = a[i];
        if(k == n) afisare();
        else Back(k + 1);
    }
}

int main()
{
    cin >> n;
    a[1] = 2, a[2] = 3, a[3] = 5, a[4] = 7;
    Back(1);
    return 0;
}