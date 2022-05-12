#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

char s[251], sm[251];
int n, km = -1, i, j, k;

int main()
{
	fin >> n;
	fin.get();
	for(i = 1; i <= n; i++)
	{
		fin.getline(s, 251);
		k = 0;
		for(j = 0; j < strlen(s); j++)
			if(strchr("aeiou", s[j])!=0) k++;
		if(k>km)
		{
			km = k;
			strcpy(sm, s);
		}
	}
	fout << sm;
	fout.close();
	return 0;
}
