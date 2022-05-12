#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n, x, max = -INT_MAX, min = INT_MAX, a, b, r, d, i;
	cin >> x;
	for(i = 1; i <= x; i++)
	{
		cin >> n;
		if(n < min) min = n;
		if(n > max) max = n;
	}
	a = max;
	b = min;
	while(b != 0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	d = a;
	cout << min/d << "/" << max/d;
	return 0;
}