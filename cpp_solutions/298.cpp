#include <fstream>
using namespace std;
ifstream fin("sumsec.in");
ofstream fout("sumsec.out");

int prim(int n)
{
	int i;
	if(n == 1 || n == 0) return 0;
	for(i = 2; i <= n; i++)
		if(n%i==0) return 0;
	return 1;
}

int main()
{
	int n, i = 0, cnt = 0;
	fin >> n;
	long long int a[1001];
	long long int p = 0, u = 0, s = 0;
	for(i = 1; i <= n; i++)
		fin >> a[i];
		if(prim(a[i]) && cnt == 0)
			p = i, cnt++;
		 if(prim(a[i]))
		 	u = i;
	
	for(i = p; i <= u; i++)
		s += a[i];

	fout << s;
	return 0;
}