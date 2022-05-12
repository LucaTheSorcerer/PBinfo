#include <fstream>
using namespace std;
ifstream fin("secvk.in");
ofstream fout("secvk.out");
int n, a[100001], k, i, j, smax = 0, dr = 0, s = 0;

int main()
{
	fin >> n >> k;
	for(i = 1; i <= n; i++)
		fin >> a[i];
	for(i = 1; i < k; i++)
		s += a[i];
	for(i = k; i <= n; i++)
	{
		s += a[i];
		s -= a[i-k];
		if(s > smax)
		{
			smax = s;
			dr = i;
		}
	}
	for(i = dr - k + 1; i <= dr; i++) fout << a[i] << ' ';
	fin.close();
	fout.close();
	return 0;
}
