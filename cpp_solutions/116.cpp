#include <iostream>
#include <iomanip>
using namespace std;

bool prim(int n)
{
	int cnt = 0, d;
	for(d = 1; d * d <= n; d++)
	{
		if(n % d == 0)
			cnt += 2;
		if(d * d == n)
			cnt--;
	}
	if(cnt == 2)
		return 1;
	return 0;
}

int main()
{
	int n;
	cin >> n;
	int x, cntp = 0, sp = 0, i;
	for(i = 1; i <= n; i++)
	{
		cin >> x;
		if(prim(x))
			sp += x, cntp++;
	}
	cout << fixed << setprecision(2) << (double)(sp*100/cntp)*0.01;
	return 0;
}
