#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("permrep.in");
ofstream fout("permrep.out");
int n, p[30];
char s[256], cuv[256];

void afisare()
{
	int i;
	for(i = 1; i <= n; i++)
		fout << s[i];
	fout << '\n';
}

void Back(int k)
{
	int i;
	for(i = 0; i < 30; i++)
		if(p[i] > 0)
		{
			p[i]--;
			s[k] = i + 'a';
			if(k == n) afisare();
			else Back(k+1);
			p[i]++;
		}
}

int main()
{
	fin >> cuv;
	n = strlen(cuv);
	int i;
	for(i = 1; i <= n; i++) p[cuv[i-1] - 'a']++;
	Back(1);
	return 0;
}
