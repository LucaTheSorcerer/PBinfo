#include <fstream>
using namespace std;
ifstream fin("nrapprime.in");
ofstream fout("nrapprime.out");
int n, x, j, cnt = 0;

int prim(int n)
{
	if(n == 0 || n == 1) return 0;
	if(n == 2) return 1;
	if(n%2==0) return 0;
	int i;
	for(i = 3; i * i <= n; i += 2)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	fin >> n;
	for(j = 1; j <= n; j++)
	{
		fin >> x;
		if(prim(x)) cnt++;
	}
	fout << cnt;
	fin.close();
	fout.close();
	return 0;
}
