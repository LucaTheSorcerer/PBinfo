#include <fstream>
using namespace std;
ifstream fin("clase.in");
ofstream fout("clase.out");

int main()
{
	int n, a[10001], m;
	fin >> n;
	for(int i = 1; i <= n; i++)
		fin >> a[i];

	fin >> m;
	long long x;
	int cnt = 0;
	for(int i = 1; i <= m; i++)
	{
		fin >> x;
		int st = 1, dr = n;
		bool ok = false;
		while(st <= dr)
		{
			int mij = (st + dr) / 2;
			if(a[mij] == x)
			{
				ok = true;
				break;
			}
			else
				if(a[mij] < x)
					st = mij + 1;
				else
					dr = mij - 1;
		}
		if(ok)
			cnt++;
	}
	fout << cnt;
	return 0;
}