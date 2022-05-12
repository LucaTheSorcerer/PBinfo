#include <fstream>
using namespace std;
ifstream fin("rotire.in");
ofstream fout("rotire.out");

int main()
{
	int n, m, a[11][11];
	fin >> n >> m;
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++) fin >> a[i][j];
	for(j = m - 1; j >= 0; --j)
	{
		for(i = 0; i < n; i++) fout << a[i][j] << " ";
		fout << endl;
	}
	fin.close();
	fout.close();
	return 0;
}
