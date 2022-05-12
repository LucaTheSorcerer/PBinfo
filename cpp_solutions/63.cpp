#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int d = 2;
	int max = 0;
	int dmax = 0;
	while(n > 1)
	{
		int count = 0;
		while(n%d==0)
		{
			count++;
			n /= d;
		}
		if(count > 0)
		{
			if(count >= max && d > dmax)
				max = count, dmax = d;
		}
		d++;
		if(d*d>n)
			d = n;
	}
	cout << dmax;
}