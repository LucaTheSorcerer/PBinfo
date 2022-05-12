#include <fstream>
using namespace std;
ifstream fin("componenteconexe1.in");
ofstream fout("componenteconexe1.out");

int n, m, x, y, a[101][101], v[101], nrc;

void dfs(int x, int val)
{
	v[x] = val;
	int i;
	for(i = 1; i <= n; i++)
		if(!v[i] && a[x][i]==1) dfs(i, val), v[i] = val;
}

int main()
{
	int i, j;
	fin >> n;
	while(fin >> x >> y) a[x][y] = a[y][x] = 1, m++;
	for(i = 1; i <= n; i++)
		if(v[i]==0) dfs(i, nrc+1), nrc++;
	fout << nrc - 1 << '\n';

	for(i = 2; i <= nrc; i++)
	{
		int rez = 0;
		for(j = 1; j <= n && rez == 0; j++)
			if(i == v[j]) rez = j;
		fout << 1 << " " << rez << " ";
	}
}
