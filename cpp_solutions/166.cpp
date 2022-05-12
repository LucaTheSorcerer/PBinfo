#include <fstream>
using namespace std;
ifstream fin("secvmax.in");
ofstream fout("secvmax.out");

int main()
{
	int n, a[10001], i, lmax = 0, l = 0, st = 0, dr = 0, sum = 0, sumax = 0;
	fin >> n;
	for(i = 1; i <= n; i++) fin >> a[i];

	for(i = 1; i <= n; i++)
	{
		if(a[i]%2==0)
		{
			sum += a[i];
			l++;
			if(l > lmax)
				lmax = l, st = i - l + 1, dr = i, sumax = sum;
			else if(l == lmax)
				if(sum > sumax)
					st = i - l + 1, dr = i; sumax = sum;
		}
		else
			l = 0, sum = 0;
	}
	fout << st << ' ' << dr;
	return 0;
}