#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("unice1.in");
ofstream fout("unice1.out");

int main()
{
	int n, a[1002], cnt = 0;
	fin >> n;
	int i;
	for(i = 0; i < n; i++) fin >> a[i];
	sort(a, a+n);
	for(i = 0; i < n; i++) if(a[i-1]!=a[i] && a[i]!=a[i+1]) cnt++;
	fout << cnt;
	return 0;
}
