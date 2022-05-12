#include <fstream>
using namespace std;
ifstream fin("secvcresc.in");
ofstream fout("secvcresc.out");

int main()
{
	int n, a[10001], lmax = 1, l = 1, st = 1, dr = 1;
	fin >> n;
	int i;
	for(i = 1; i <= n; i++) fin >> a[i];

	for(i = 2; i <= n; i++)
	{
		if(a[i] > a[i-1])
		{
			l++;
			if(l > lmax)
				lmax = l, st = i - l + 1, dr = i;
		}
		else
			l = 1;
	}

	fout << st << ' ' << dr;
	return 0;
}
