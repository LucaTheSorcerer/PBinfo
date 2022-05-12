#include <iostream>
using namespace std;

int main()
{
	int n, i, j, a[1001], x;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> x;
		int cifmin = 10;
		while(x)
		{
			if(x % 10 < cifmin)
				cifmin = x % 10;
			x /= 10;
		}
		a[i] = cifmin;		
	}

	for(i = 1; i < n; i++)
		for(j = i + 1; j <= n; j++)
			if(a[i] > a[j])
				swap(a[i],a[j]);


	int poz = 1;
	while(a[poz] == 0)
		poz++;

	swap(a[poz], a[1]);

	for(i = 1; i <= n; i++)
		cout << a[i];
	
	return 0;
	
	
}