#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b;
    cin >> n >> a >> b;
    if (n % a == 0 && n % b != 0)
        cout << "C";
    else if(n%a != 0 && n % b == 0)
        cout << "N";
    else if(n % a == 0 && n % b == 0)
        cout << "CN";
    else
        cout << "nimic";
    return 0;
}