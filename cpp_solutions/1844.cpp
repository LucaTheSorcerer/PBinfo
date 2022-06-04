#include <iostream>
using namespace std;

void num(int v[], int n)
{
	if(n == 0) v[0]=0;
	else
	{
		if(v[n] <= v[0]) v[n] = 0;
		num(v, n-1);
	}
}

int main()
{
	int n, v[51], i = 0;
	
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> n;
	
	num(v, n);

	for(i = 0; i < n; i++)
		cout << v[i] << ' ';

	return 0;

}