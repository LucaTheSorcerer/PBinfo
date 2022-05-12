#include <iostream>
#include <climits>
using namespace std;

int v[1001];
int n, i, k, Max, Min, c, aux, sw;

int main()
{
	cin >> n;
	Min = 1000000001;
	for(i = 1; i <= n; i++)
	{
		cin >> v[i];
		if(v[i] > Max)
		{
			Max = v[i];
			k = i;
		}
		if(v[i] < Min)
		{
			Min = v[i];
			c = i;
		}
	}
	if(k > c)
	{
		aux = c;
		c = k;
		k = aux;
	}
	do
	{
		sw = 0;
		for(i = k; i < c; i++)
			if(v[i] > v[i+1])
			{
				v[0] = v[i];
				v[i] = v[i+1];
				v[i+1] = v[0];
				sw = 1;
			}
	}while(sw==1);
	for(i = 1; i <= n; i++)
		cout << v[i] << " ";
	return 0;
}