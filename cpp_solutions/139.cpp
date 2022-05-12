#include <fstream>
using namespace std;
ifstream fin("n311.in");
ofstream fout("n311.out");
int n, k = 0, sw, i, v[1000000];

int main()
{
	fin >> n;
	while(n != 1)
	{
		if(n%3==0)
		{
			n /= 3;
			v[++k] = 3;
		}
		else
		if((n+1)%3==0)
		{
			n += 1;
			v[++k] = -1;
		}
		else
		{
			n -= 1;
			v[++k] = 1;
		}
	}
	for(i = k; i >= 1; i--)
		fout << v[i] << " ";
	return 0;
}
