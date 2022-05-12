#include <fstream>
using namespace std;
ifstream fin("prodmax.in");
ofstream fout("prodmax.out");

int main()
{
	int n, m, a[100][100], pmax = -1;
	fin >> n >> m;
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			fin >> a[i][j];
	for(j = 0; j < m; j++)
	{
		long long p = 1;
		for(i = 0; i < n; i++)
		{
			p *= a[i][j];
		}
		if(p > pmax) pmax = p;
	}
	for(j = 0; j < m; j++)
	{
		long long p = 1;
		for(i = 0; i < n; i++)
		{
			p *= a[i][j];
		}
		if(pmax==p) fout << j + 1 << " ";
	}
	fin.close();
	fout.close();
	return 0;
}
