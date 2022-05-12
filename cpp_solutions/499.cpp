#include <bits/stdc++.h>
using namespace std;

int sumacif(int a, int b)
{
	int s = 0, s1 = 0;
	while(a!=0)
	{
		s += a %10;
		a /= 10;
	}

	while(b != 0)
	{
		s1 += b % 10;
		b /= 10;
	}

	if(s==s1)
		return 1;
	else
		return 0;
}

int main()
{
	int n, a[202], count;
	cin >> n;
	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	for(int i = 1; i <= n; ++i)
		for(int j = i + 1; j <= n; ++j)
			if(sumacif(a[i],a[j]))
				count++;

	cout << count;
	return 0;

}