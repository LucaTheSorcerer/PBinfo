#include <fstream>
using namespace std;
ifstream fin("nraparitii.in");
ofstream fout("nraparitii.out");

int main()
{
	int n, a[101], x, cnt = 1;
	fin >> n;
	int i;
	for(i = 1; i < n; i++) fin >> a[i];
	fin >> x;
	for(i = 1; i < n; i++)
	{
		if(a[i]==x) cnt++;
	}
	fout << cnt;
	return 0;
}
