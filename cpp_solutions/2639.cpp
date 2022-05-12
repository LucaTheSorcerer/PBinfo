#include <fstream>
using namespace std;
ifstream fin("radiera.in");
ofstream fout("radiera.out");

int n, a[1002], L[1002], P[1002], l, lmax;

int main()
{
	fin >> n;
	int i, j;
	for(i = 1; i <= n; i++)
		fin >> a[i];
	for(i = n; i >= 1; i--)
	{
		l = 0;
		for(j = i + 1; j <= n; j++)
			if(a[i] <= a[j] && L[j] > l) l = L[j];
		L[i] = l + 1;
		if(L[i] > lmax) lmax = L[i];
	}
	fout << n - lmax;
	return 0;
}
