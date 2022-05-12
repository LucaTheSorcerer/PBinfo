#include <fstream>
using namespace std;
ifstream fin("produs_matrice.in");
ofstream fout("produs_matrice.out");
long long n, m, p, i, j, l,  a[105][105], b[105][105], c[105][105];

int main()
{
	fin >> m >> n;
	for(i = 1; i <= m; i++)
		for(j = 1; j <= n; j++)
		       fin >> a[i][j];
	fin >> p;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= p; j++)
			fin >> b[i][j];
	for(i = 1; i <= m; i++)
		for(j = 1; j <= p; j++)
			for(l = 1; l <= n; l++)
				c[i][j] += a[i][l] * b[l][j];
	for(i = 1; i <= m; i++)
	{
		for(j = 1; j <= p; j++)
			fout << c[i][j] << " ";
		fout << '\n';
	}
}
