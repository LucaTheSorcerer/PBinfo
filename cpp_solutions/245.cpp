#include <iostream>
using namespace std;

int d(int n)
{
	int cnt = 0, i;
	for(i = 1; i * i <= n; i++)
	{
		if(n%i==0)
			cnt += 2;
		if(i * i == n)
			cnt--;
	}
	return cnt;
}

int main()
{
	int n, max = 0, a = 0, i;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		if(d(i)>max)
			max=d(i), a = i;
	}
	cout << a;
}
