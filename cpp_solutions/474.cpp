#include <fstream>
#include <vector>
using namespace std;
ifstream fin("veriflant.in");
ofstream fout("veriflant.out");
vector <int>G[101];
int n, m, x, y, k, p, L[201];

int verif(int k, int L[])
{
	int i;
	for(i = 1; i < k; i++)
	{
		int check = 0;
		for(auto x:G[L[i]])
			if(x == L[i+1]) check = 1;
		if(check == 0) return 0;
	}
	int f[101] = {0};
	for(i = 1; i <= k; i++) f[L[i]]++;
	for(i = 1; i <= n; i++)
		if(f[i] > 1) return 2;
	return 1;
}

int main()
{
	fin >> n >> m;
	int i;
	for(i = 1; i <= m; i++)
	{
		fin >> x >> y;
		G[x].push_back(y);
		G[y].push_back(x);
	}

	fin >> k;
	for(i = 1; i <= k; i++)
	{
		fin >> p;
		int j;
		for(j = 1; j <= p; j++)
			fin >> L[j];
		if(verif(p, L) == 0) fout << "NU\n";
		else if(verif(p, L) == 1) fout << "ELEMENTAR\n";
		else fout << "NEELEMENTAR\n";
	}
}
