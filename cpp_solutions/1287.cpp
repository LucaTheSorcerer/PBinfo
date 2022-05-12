#include <iostream>
#include <fstream>
using namespace std;
int n, a, b, x[10], check;

void Afisare()
{
    int i;
    for(i = 1; i <= n; i++)
        cout << x[i];
    cout << endl;
    check++;
}

void Back(int k)
{
    int i;
    for(i = a; i <= b; i++)
    {
        x[k] = i;
        if(k == n) Afisare();
        else Back(k + 1);
    }
}

int main()
{
    cin >> a >> b >> n;
    Back(1);
    return 0;
}
