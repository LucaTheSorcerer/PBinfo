#include <fstream>
using namespace std;
ifstream fin("BFS.in");
ofstream fout("BFS.out");
int viz[101], a[101][101], n, i, nod, x, y, prim, ultim, m, C[101], p;

int main()
{
	fin >> n >> m >> p;
	for(i = 1; i <= m; i++)
	{
		fin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	prim = 1;
	ultim = 1;
	C[1] = p;
	viz[p] = 1;
	while(prim <= ultim)
	{
		nod = C[prim];
		for(i = 1; i <= n; i++)
			if(viz[i] == 0 && a[nod][i]==1)
			{
				C[++ultim] = i;
				viz[i] = 1;
			}
		prim++;
	}
	for(i = 1; i <= ultim; i++)
		fout << C[i] << " ";
	return 0;
}
