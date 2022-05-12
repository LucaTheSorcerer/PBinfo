#include <bits/stdc++.h>
using namespace std;

int cmmdc(int a, int b)
{
	int r, d;
	while(b!=0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	d = a;
	if(d==1)
		return 1;
	else
		return 0;
}



int main()
{
	int n, a[1001], c= 0;
	cin >> n;
	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	for(int i = 1; i <= n; ++i)
	{
		for(int j = i + 1; j <= n; ++j)
			if(cmmdc(a[i],a[j]))
				c++;
	}
	cout << c;
	return 0;
}