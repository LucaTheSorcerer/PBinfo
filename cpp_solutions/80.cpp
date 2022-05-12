#include <iostream>
using namespace std;

int prim(int a, int b);

int main()
{
	int n, a[100001], cnt = 0, i;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		if(prim(a[i], a[i-1]))
			cnt++;
	}
	cout << cnt;
	return 0;
}

int prim(int a, int b)
{
	int r;
	while(b)
	{
		r = a % b;
		a = b;
		b = r;
	}
	if(a == 1)
		return 1;
	else
		return 0;
}
