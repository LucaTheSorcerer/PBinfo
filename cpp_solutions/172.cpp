#include <iostream>
#include <cmath>
using namespace std;
int dm = 1000000, sm = 1000000, n, a, b, x, y;

int main()
{
	cin >> n >> a >> b;
	int i;
	for(i = 1; i <= n - 2; i++)
	{
		if(abs(a-b)<dm)
		{
			dm = abs(a-b);
			x = a;
			y = b;
		}
		if(abs(a-b)==dm)
			if(a+b<sm)
			{
				sm = a + b;
				x = a;
				y = b;
			}
		a = b;
		cin >> b;
	}
	cout << x << ' ' << y;
	return 0;
}
