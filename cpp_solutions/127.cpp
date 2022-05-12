#include <iostream>
using namespace std;

int prim(int n)
{
	int c;
	while(n)
	{
		c = n % 10;
		n /= 10;
	}
	return c;
}

int main()
{
	int n, i, a[1001], s = 0;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		s += prim(a[i]);
	}
	cout << s;
}
