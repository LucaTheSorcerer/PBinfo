#include <bits/stdc++.h>
using namespace std;

long long produs(long long n)
{
	long long prod = 1;
	long long d = 2;
	while(n > 1)
	{
		int count = 0;
		while(n % d==0)
		{
			n /= d;
			count++;
		}
		if(count)
		{
			prod *= d;
		}
		d++;
		if(d*d > n)
			d = n;
	}
	return prod;
}

int main()
{
	long long a, b;
	cin >> a >> b;
	long long prod1 = produs(a);
	long long prod2 = produs(b);
	if(prod1 > prod2)
		cout << a;
	else if(prod1 < prod2)
		cout << b;
	else
		cout << min(a,b);
	return 0;
}