#include <iostream>
using namespace std;

int n, a[101], count;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(a[i]%2!=0) count = 1;
    }
    if(count)
        cout << "NU";
    else
        cout << "DA";
	return 0;
}