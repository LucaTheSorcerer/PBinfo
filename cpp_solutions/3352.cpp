#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, s, t, d;

int main()
{
	cin >> n >> m;
	a = n;
	b = m;
	d = 2;
	while(n > 1)
	{
		if(n%d==0)
		{
			s += d;
			while(n%d==0) n /= d;
		}
		d++;
		if(d * d > n) d = n;
	}
	d = 2;
	while(m > 1)
	{
		if(m%d==0)
		{
			t += d;
			while(m % d == 0) m /= d;
		}
		d++;
		if(d * d > m) d = m;
	}

	if(s > t) cout << a;
		else
			if(s < t) cout << b;
		else
			if(a < b) cout << a;
				else cout << b;
	return 0;
}