#include <iostream>
using namespace std;

int main()
{
	int n, d = 2, p = 0;
	cin >> n;
	while(n > 1)
	{
		p = 0;
		while(n % d == 0)
			n /= d, p++;
		if(p != 0)
			cout << d << ' ' << p << endl;
		d++;
		if(d * d > n)
			d = n;
	}
	return 0;
}