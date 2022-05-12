#include <fstream>
using namespace std;
ifstream fin("exista.in");
ofstream fout("exista.out");

int main()
{
	int k, n, m, a[12][12], s = 0, c = 0;
	fin >> k >> n >> m;
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			fin >> a[i][j];
	for(j = 0; j < m; j++)
	{
		int cnt = 0;
		for(i = 0; i < n; i++)
		{
			if(a[i][j]==k)
				cnt++;
		}
		if(cnt!=0){c++, s += j + 1;}
	}
	if(c == 0) fout << "NU EXISTA";
	else fout << s;
	fin.close();
	fout.close();
	return 0;
}
