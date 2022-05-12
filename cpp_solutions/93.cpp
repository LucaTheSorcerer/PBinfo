#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("cuvmax.in");
ofstream fout("cuvmax.out");

char s[256], cuv[256], sep[]=" ", f[256];
int i, n, k, c, j, maxi;

int main()
{
	fin >> n;
	fin.get();
	for(j = 1; j <= n; j++)
	{
		fin.getline(s, 256);
		i = 0, c = 0;
		while(i < strlen(s))
		{
			while(strchr(sep, s[i]) && i<strlen(s)) i++;
			k = 0;
			while(strchr(sep, s[i])==0 && i < strlen(s)) cuv[k++] = s[i++];
			if(k > 0)
			{
				cuv[k] = 0;
				c++;
			}
			if(c > maxi)
			{
				maxi = c;
				strcpy(f, s);
			}
		}
	}
	fout << f;
	return 0;
}
