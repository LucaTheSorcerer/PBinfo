#include <iostream>
using namespace std;

int main()
{
	int n, a[1001], x, i, j;
	cin >> n; 
	for(i = 1; i <= n; i++)
	{
		cin >> x;
		while(x > 9)
			x /= 10;
		a[i] = x;
	}

	for(i = 1; i < n; i++)
		for(j = i+1; j <= n; j++)
			if(a[i] > a[j])
				swap(a[i],a[j]);
	
	for(i = 1; i <= n; i++)
		cout << a[i];
	return 0;
}