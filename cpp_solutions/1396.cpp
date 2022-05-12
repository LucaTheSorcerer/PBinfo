#include <fstream>
using namespace std;
ifstream fin("mdiferenta.in");
ofstream fout("mdiferenta.out");
int a[101][101], b[101][101], c[101][101], n, m, p, q, i, j, maxim1 = 0, maxim2 = 0;

int main()
{
	fin >> n >> m;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			fin >> a[i][j];
	fin >> p >> q;
	for(i = 1; i <= p; i++)
		for(j = 1; j <= q; j++)
			fin >> b[i][j];
	if(n > p) maxim1 = n;
	else maxim1 = p;
	if(m > q) maxim2 = m;
	else maxim2 = q;
	for(i = 1; i <= maxim1; i++)
		for(j = 1; j <= maxim2; j++)
			c[i][j] = a[i][j] - b[i][j];
	fout << maxim1 << " " << maxim2 << endl;
	for(i = 1; i <= maxim1; i++)
	{
		for(j = 1; j <= maxim2; j++)
			fout << c[i][j] << " ";
		fout << endl;
	}
	return 0;
}
