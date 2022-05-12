#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[1001];
	int p, u;
	int maxim = -INT_MAX, minim = INT_MAX;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i] > maxim)
			maxim = a[i], p = i;
		if(a[i] < minim)
			minim = a[i], u = i;
	}

	if(p > u)
	{
		int c = p;
		p = u;
		u = c;
	}

	for(int i = p; i <= u; ++i)
		cout << a[i] << " ";
	return 0;
}