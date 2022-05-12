#include <bits/stdc++.h>
using namespace std;

int main()
{
    int suma = 0;
    int tmp;
    while(tmp != 0)
    {
        cin >> tmp;
        if(tmp%2==0)
            suma += tmp;
    }
    cout << suma;
    return 0;
}