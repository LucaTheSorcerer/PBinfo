#include <iostream>
using namespace std;

int n, a, par, count = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a;
        if(a%2==0 && count == 0)
        {
            par = a;
            count ++;
        }
    }
    if(count==0)
        cout << "IMPOSIBIL";
    else
        cout << par;
}