#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("pozitiex.in");
ofstream fout("pozitiex.out");

int main()
{
	int x, n, cnt = 0, a[100001];
	fin >> x >> n;
	int i;
	for(i = 0; i < n; i++) fin >> a[i];
	sort(a, a+n);
	for(i = 0; i < n; i++)
	{
		if(a[i]==x)
		{
			fout << i + 1;
			cnt++;
		}
	}
	if(cnt == 0)
		fout << "NU EXISTA";
	fin.close();
	fout.close();
	return 0;
}
