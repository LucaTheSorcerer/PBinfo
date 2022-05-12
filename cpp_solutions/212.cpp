#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("maxminmatrice.in");
ofstream fout("maxminmatrice.out");

int main()
{
	int n, m, a[23][23], v[100];
	fin >> n >> m;
	int i, j;
	for(i = 0; i < n; i++)
	{
		int mini = 1001;
		for(j = 0; j < m; j++)
		{
			fin >> a[i][j];
			if(a[i][j] < mini) mini = a[i][j];
		}
		v[i] = mini;
	}
	sort(v, v + n);
	fout << v[n-1];
	fin.close();
	fout.close();
	return 0;
}
